#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "CatalogItem.h"

/*
 * creates a new catalog_item structure
 * if successful, assigns parameter values to member fields
 * else returns NULL (return value of a bad malloc or calloc)
 */
struct catalog_item * make_catalog_item(int code, char desc[50], 
	int num_pieces, float price ){
	struct catalog_item * itemPtr;

	// calloc creates a zero-filled structure of the appropriate size
	itemPtr = (struct catalog_item *) calloc (1, sizeof(struct catalog_item));

	if (itemPtr){
		itemPtr->code = code;
		strcpy(itemPtr->description, desc);
		itemPtr->num_pieces = num_pieces;
		itemPtr->retail_price = price;
		itemPtr->next = NULL;
	}

	return itemPtr;
};


/*
 * prompts user for values of member fields
 * creates new catalog_item structure and returns pointer
 * reports errors to stderr
 */
struct catalog_item * get_catalog_item(){
	struct catalog_item * itemPtr = NULL;
	int code;
	char desc[50];
	int num_pieces;
	float price;
	
	printf("\n** Create a new item in inventory ** \n");

	printf("Enter item number: ");
	scanf("%d", &code);

	printf("Enter product description (50 char max) : ");
	scanf("%50s^[\n]", desc);

	printf("Enter number of pieces in set: ");
	scanf("%d", &num_pieces);

	printf("Enter retail price : ");
	scanf("%f", &price);
	printf("\n");

	// use those values to make and return a new catalog item
	return (make_catalog_item(code, desc, num_pieces, price));
};

/*
 * display one-line, formatted info about catalog item
 */
void show_catalog_item(struct catalog_item * itemPtr){

	if (itemPtr){
		printf("%d\t %s\t %d\t $%.2f \n", itemPtr->code, 
		itemPtr->description, itemPtr->num_pieces, itemPtr->retail_price);
	}
	else
		fprintf(stderr, "invalid item info \n");

	return;
};


