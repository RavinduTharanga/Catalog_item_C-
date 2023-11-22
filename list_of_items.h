#ifndef LIST_OF_ITEMS_H
#define LIST_OF_ITEMS_H
#include "catalog.h"
#include <stdbool.h>

/*
 * structure to encapsulate list-related variables
 * in this case, a single head pointer
 */
struct list_of_items{
	struct catalog_item *head;	
};

// function prototypes
bool add_item(struct catalog_item *, struct list_of_items *);
bool show_item_by_code(int , struct list_of_items *);
void show_list(struct list_of_items *);

#endif

