#include <iostream>
#include <stdlib.h>

using namespace std;

class product {
public:
    void addproduct (int Product_ID, int Price, int Expiration_Date, string Product_Name, string Manufacturer);
    void DisplayProducts (void);
    product();
private:
    int Product_ID, Price, Expiration_Date;
    string Product_Name, Manufacturer;
    };

product::product (void) {
    string choice;

    cout << "WELCOME TO KAINAN" << endl;



do{
    cout << " Product ID: ";
    cin >> Product_ID;
    cout << " Product Name: ";
    cin >> Product_Name;
    cout << " Price: ";
    cin >> Price;
    cout << " Manufacturer: ";
    cin >> Manufacturer;
    cout << " Expiration Date: ";
    cin >> Expiration_Date;
    cout << "Do you want to add products? (Y/N) ";
    cin >> choice;
}
while (choice == "Y" || choice == "y");
}

void product::DisplayProducts()
{
    system ("CLS");
    system ("Color 2");
    cout << "The Product ID is: " << Product_ID << endl;
    cout << "The Product Name is: " << Product_Name << endl;
    cout << "The Price is: " << Price << endl;
    cout << "The Product Manufacturer: " << Manufacturer << endl;
    cout << "The Product Expiration Date is: " << Expiration_Date << endl;
}

int main(){
    product product;

    product.DisplayProducts();

    return 0;
}
