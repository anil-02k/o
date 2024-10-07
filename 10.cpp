// //Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at the store. An Invoice should include four pieces of information as instance.
// Data Members ‐
//  partNumber (type String)
//  partDescription (type String)
//  quantity of the item being purchased (type int)
//  price_per_item (type double)
// Your class should have a constructor that initializes the four instance variables. Provide a set and a get method for each instance variable. In addition, provide a method named getInvoiceAmount() that calculates the invoice amount (i.e., multiplies the quantity by the price per item), then returns the amount as a double value. If the quantity is not positive, it should be set to 0. If the price per item is not positive,it should be set to0.0. Write a test application named invoiceTest that demonstrates class Invoice’s capabilities.
#include <iostream>
#include <string>
using namespace std;

class Invoice {
private:
    string partNumber;
    string partDescription;
    int quantity;
    double price_per_item;

public:
    // Constructor to initialize the instance variables
    Invoice(string pn, string pd, int q, double p) {
        partNumber = pn;
        partDescription = pd;
        setQuantity(q);
        setPricePerItem(p);
    }

    // Setter for quantity
    void setQuantity(int q) {
        quantity = (q > 0) ? q : 0; // Set to 0 if quantity is not positive
    }

    // Getter for quantity
    int getQuantity() {
        return quantity;
    }

    // Setter for price_per_item
    void setPricePerItem(double p) {
        price_per_item = (p > 0.0) ? p : 0.0; // Set to 0.0 if price is not positive
    }

    // Getter for price_per_item
    double getPricePerItem() {
        return price_per_item;
    }

    // Getter for partNumber
    string getPartNumber() {
        return partNumber;
    }

    // Setter for partNumber
    void setPartNumber(string pn) {
        partNumber = pn;
    }

    // Getter for partDescription
    string getPartDescription() {
        return partDescription;
    }

    // Setter for partDescription
    void setPartDescription(string pd) {
        partDescription = pd;
    }

    // Method to calculate the invoice amount
    double getInvoiceAmount() {
        return quantity * price_per_item; // Calculate total amount
    }
};

// Test application
int main() {
    // Create an Invoice object
    Invoice invoice("1234", "Hammer", 5, 9.99);

    // Display the invoice details
    cout << "Part Number: " << invoice.getPartNumber() << endl;
    cout << "Part Description: " << invoice.getPartDescription() << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: $" << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

    // Test setting negative values
    invoice.setQuantity(-3); // Should set quantity to 0
    invoice.setPricePerItem(-5.0); // Should set price to 0.0

    // Display the updated invoice details
    cout << "\nAfter setting negative values:" << endl;
    cout << "Quantity: " << invoice.getQuantity() << endl;
    cout << "Price per Item: $" << invoice.getPricePerItem() << endl;
    cout << "Invoice Amount: $" << invoice.getInvoiceAmount() << endl;

    return 0;
}
