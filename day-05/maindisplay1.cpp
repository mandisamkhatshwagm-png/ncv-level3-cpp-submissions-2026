#include <iostream>
#include <string>

class Product {
private:
    std::string productName;
    double price;
    int quantityInStock;

public:
    // Default Constructor (From your slide/image)
    Product() {
        productName = "";
        price = 0.0;
        quantityInStock = 0;
    }

    // SetProduct method with internal validations (From your slide/image)
    void setProduct(std::string nm, double pr, int qty) {
        // Product name cannot be an empty string
        if (nm == "") {
            productName = "Unknown";
        } else {
            productName = nm;
        }

        // Price must not be negative
        if (pr >= 0) {
            price = pr;
        } else {
            price = 0;
        }

        // Quantity in stock must not be negative
        if (qty >= 0) {
            quantityInStock = qty;
        } else {
            quantityInStock = 0;
        }
    }

    // Getters (From your slide/image)
    std::string getProductName() const { return productName; }
    double getPrice() const { return price; }
    int getQuantityInStock() const { return quantityInStock; }
};

// ============================================================================
// THE THREE REQUESTED FUNCTIONS
// ============================================================================

// 1. Function to accept product data from user and set it
void getProductData(Product &prod) {
    std::string name;
    double price;
    int qty;

    std::cout << "Enter product name: ";
    std::getline(std::cin >> std::ws, name); // Handles names with spaces safely

    std::cout << "Enter price (R): ";
    std::cin >> price;

    std::cout << "Enter quantity in stock: ";
    std::cin >> qty;

    // Passes data to class member method for safe validation
    prod.setProduct(name, price, qty);
}

// 2. Function to display product details onto console window
void displayProduct(const Product &prod) {
    std::cout << "\n--- Product Information ---" << std::endl;
    std::cout << "Product Name:      " << prod.getProductName() << std::endl;
    std::cout << "Price:             R" << prod.getPrice() << std::endl;
    std::cout << "Quantity in Stock: " << prod.getQuantityInStock() << std::endl;
}

// 3. Function to compare prices of two items
void prodCompare(const Product &p1, const Product &p2) {
    std::cout << "\n--- Price Comparison ---" << std::endl;
    if (p1.getPrice() > p2.getPrice()) {
        std::cout << p1.getProductName() << " is more expensive than " << p2.getProductName() << "." << std::endl;
    } else if (p2.getPrice() > p1.getPrice()) {
        std::cout << p2.getProductName() << " is more expensive than " << p1.getProductName() << "." << std::endl;
    } else {
        std::cout << "Both products (" << p1.getProductName() << " and " << p2.getProductName() << ") have the same price." << std::endl;
    }
}

// ============================================================================
// ENTRY POINT / MAIN METHOD
// ============================================================================
int main() {
    Product item1;
    Product item2;

    // Call getProductData for item 1
    std::cout << "=== Setup Product 1 ===" << std::endl;
    getProductData(item1);

    // Call getProductData for item 2
    std::cout << "\n=== Setup Product 2 ===" << std::endl;
    getProductData(item2);

    // Call displayProduct for both items
    displayProduct(item1);
    displayProduct(item2);

    // Call prodCompare to evaluate price points
    prodCompare(item1, item2);

    return 0;
}
