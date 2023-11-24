// #ifndef CATALOG_H
// #define CATALOG_H

// //define a catalog_item structure
// struct catalog_item{
// 	int	code;
// 	char	description[50];
// 	int 	num_pieces;
// 	float	retail_price;
// 	struct catalog_item * next;
// };

// //function prototypes
// struct catalog_item * make_catalog_item( int code, char desc[50], 
// 	int num_pieces, float price ); 

// void show_catalog_item(struct catalog_item *);

// struct catalog_item * get_catalog_item();


// #endif


#ifndef CATALOG_H
#define CATALOG_H

#include <string>

class CatalogItem {
    private:
        int code;
        std::string description;
        int numPieces;
        float retailPrice;

    public:
        // Constructor
        CatalogItem(int code, std::string desc, int numPieces, float price);

        // Display method
        void show() const;

        // Static method to get a new catalog item from user input
        static CatalogItem* getCatalogItem();
};

#endif
