#include <iostream>
using namespace std;
class Division {
public:
    double x, y;
    void getdata() {
        cout << "Enter the numerator (x): ";
        cin >> x;
        cout << "Enter the denominator (y): ";
        cin >> y;
    }
    void divide() {
        try {
            if (y == 0) {
                throw(y);  // Throw y if denominator is zero
            } else {
                cout << "Division of both numbers is: " << x / y << endl;
            }
        }
        catch (double) {
            cout << "Exception caught: Division by zero not allowed!" << endl;
        }
    }
};
int main() {
    char choice;
    do {
        Division div;
        div.getdata();
        div.divide();
        cout << "\nDo you want to perform another division? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    
    cout << "Program terminated." << endl;
    return 0;
}
