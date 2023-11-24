// #ifndef LIST_OF_ITEMS_H
// #define LIST_OF_ITEMS_H
// #include "catalog.h"
// #include <stdbool.h>

// /*
//  * structure to encapsulate list-related variables
//  * in this case, a single head pointer
//  */
// struct list_of_items{
// 	struct catalog_item *head;	
// };

// // function prototypes
// bool add_item(struct catalog_item *, struct list_of_items *);
// bool show_item_by_code(int , struct list_of_items *);
// void show_list(struct list_of_items *);

// #endif

#ifndef LIST_OF_ITEMS_H
#define LIST_OF_ITEMS_H

#include "CatalogItem.h"
#include <vector>

class ListOfItems {
    private:
        std::vector<CatalogItem*> items;  // Using a vector for item storage

    public:
        // Method to add an item to the list
        bool addItem(CatalogItem* newItem);

        // Method to display item by its code
        bool showItemByCode(int code) const;

        // Method to display all items in the list
        void showList() const;
};

#endif
