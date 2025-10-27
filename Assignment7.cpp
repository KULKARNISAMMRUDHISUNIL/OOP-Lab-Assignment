#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Inventory {
public:
    string item;
    int id;
    int quantity;
    float price;

    void getData() {
        cout << "Enter item name: ";
        cin >> item;
        cout << "Enter item ID: ";
        cin >> id;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter price: ";
        cin >> price;
    }

    void displayData() {
        cout << "\nItem Name: " << item;
        cout << "\nItem ID: " << id;
        cout << "\nQuantity: " << quantity;
        cout << "\nPrice: " << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Inventory items[n];

    // Open file for writing
    ofstream outFile("inventory.txt");
    if (!outFile) {
        cout << "Error opening file for writing!" << endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for item " << i + 1 << ":\n";
        items[i].getData();
        outFile << items[i].item << " "
                << items[i].id << " "
                << items[i].quantity << " "
                << items[i].price << "\n";
    }

    outFile.close();

    // Open file for reading
    ifstream inFile("inventory.txt");
    if (!inFile) {
        cout << "Error opening file for reading!" << endl;
        return 1;
    }

    Inventory temp;
    cout << "\n--- Reading data from file ---\n";
    while (inFile >> temp.item >> temp.id >> temp.quantity >> temp.price) {
        temp.displayData();
    }

    inFile.close();
    return 0;
}
