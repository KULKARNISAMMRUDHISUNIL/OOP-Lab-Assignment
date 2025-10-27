//KULKARNI SAMMRUDHI SUNIL
//B24CE1125
#include <iostream>
using namespace std;
template <class T>
void selection_sort(T a[], int n)
{
    int i, j, min;
    // Selection sort algorithm
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min]) {
                min = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(a[i], a[min]);
    }
    // Display sorted array
    for (i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main() {
    int choice;
    char ans;

    do {
        cout << "\n------- MENU -------" << endl;
        cout << "1. Sort Integer Array" << endl;
        cout << "2. Sort Float Array" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter size of integer array: ";
                cin >> n;
                int a[n];
                cout << "Enter " << n << " elements: ";
                for (int i = 0; i < n; i++) {
                    cin >> a[i];
                }
                cout << "Sorted array: ";
                selection_sort(a, n);
                break;
            }

            case 2: {
                int n;
                cout << "Enter size of float array: ";
                cin >> n;
                float a[n];
                cout << "Enter " << n << " elements: ";
                for (int i = 0; i < n; i++) {
                    cin >> a[i];
                }
                cout << "Sorted array: ";
                selection_sort(a, n);
                break;
            }

            case 3:
                cout << "Exiting program..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

        cout << "\nDo you want to continue? (y/n): ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    return 0;
}

