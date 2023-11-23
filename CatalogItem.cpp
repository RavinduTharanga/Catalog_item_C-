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
    std::string description; // Using std::string for ease of use
    int num_pieces;
    float retail_price;
    CatalogItem* next;

public:
    // Constructor
    CatalogItem(int code, std::string desc, int num_pieces, float price)
        : code(code), description(desc), num_pieces(num_pieces), retail_price(price), next(nullptr) {}

    // Display function
    void showCatalogItem() const {
        // std::cout << "Code: " << code << "\nDescription: " << description
        //           << "\nNumber of Pieces: " << num_pieces << "\nRetail Price: " << retail_price << std::endl;
    }

    // Getter functions
    int getCode() const { return code; }
    std::string getDescription() const { return description; }
    int getNumPieces() const { return num_pieces; }
    float getRetailPrice() const { return retail_price; }
    CatalogItem* getNext() const { return next; }

    // Setter functions
    void setNext(CatalogItem* nextItem) { next = nextItem; }

    // Additional functions can be added as per requirement
};

#endif // CATALOG_H

