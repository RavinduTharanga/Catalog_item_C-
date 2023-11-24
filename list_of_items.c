// #include <stdio.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include "catalog.h"
// #include "list_of_items.h"

// /*
//  * add the provided catalog item to the list
//  * report error to stderr
//  */
// bool add_item(struct catalog_item *new_item, struct list_of_items * listPtr){

// 	bool success = false;
// 	if (new_item == NULL){
// 		fprintf(stderr, "item to add is not valid");
// 	}
// 	else if (listPtr == NULL){
// 		fprintf(stderr, "list is not valid");
// 	}
// 	else{
// 		// make the new item point to the current first item (or NULL if empty)
// 		new_item->next = listPtr->head;
// 		// make the head point to the new item 
// 		listPtr->head = new_item;
// 		success = true;
// 	}
// 	return success;
// };

// /*
//  * display item info for item with provided code
//  * otherwise, send "not found" to stderr
//  */
// bool show_item_by_code(int catalog_code, struct list_of_items *listPtr){
// 	struct catalog_item *temp;
// 	bool success = false;

// 	// use temp pointer to traverse the list
// 	temp = listPtr->head;

// 	// while we haven't found the item or reached the end of the list
// 	// advance the pointer
// 	while ( (temp->next != NULL) && (temp->code != catalog_code)){
// 		temp = temp->next;
// 	}
// 	// if we found it, display the item and declare success
// 	if (temp->code == catalog_code){
// 		show_catalog_item(temp);
// 		success = true;
// 	}
// 	// otherwise, send message to stderr
// 	if (!success){
// 		fprintf(stderr, "catalog code not found in inventory \n");
// 	}
// 	return success;
// };

// /*
//  * display all list items
//  * as well as header and footer
//  */
// void show_list(struct list_of_items *listPtr){
// 	// use temp to traverse the list, starting at first item
// 	struct catalog_item *temp = listPtr->head;

// 	// display header
//   	printf("\ncode    description                   num_pieces  price\n");
//   	printf("---------------------------------------------------------\n");

// 	// while not at end of list, display item and advance pointer
// 	while (temp != NULL){
// 		show_catalog_item(temp);
// 		temp = temp->next;
// 	}

// 	//display footer
//   	printf("---------------------------------------------------------\n");
// 	return;
// };




#include "list_of_items.h"
//#include <iostream>

// Add an item to the list
bool ListOfItems::addItem(CatalogItem* newItem) {
    if (newItem == nullptr) {
        std::cerr << "Item to add is not valid\n";
        return false;
    }

    items.push_back(newItem);
    return true;
}

// Display item by its code
bool ListOfItems::showItemByCode(int code) const {
    for (const auto& item : items) {
        if (item->getCode() == code) {
            item->show();
            return true;
        }
    }

    std::cerr << "Catalog code not found in inventory\n";
    return false;
}

// Display all items in the list
void ListOfItems::showList() const {
    std::cout << "\ncode    description                   num_pieces  price\n";
    std::cout << "---------------------------------------------------------\n";

    for (const auto& item : items) {
        item->show();
    }

    std::cout << "---------------------------------------------------------\n";
}
