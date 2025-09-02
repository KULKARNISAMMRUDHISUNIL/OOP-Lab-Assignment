#include <iostream>
#include <string>
using namespace std;
class Staff {
protected:
    int id;
    string name;
public:
    void accept() {
        cout << "Enter Staff ID: ";
        cin >> id;
        cout << "Enter Staff Name: ";
        cin >> name;
    }
    void display() {
        cout << "Staff ID: " << id << endl;
        cout << "Staff Name: " << name << endl;
    }
};
class Teacher : public Staff {
private:
    string subject;
    int experience;
public:
    void accept() {
        Staff::accept();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Years of Experience: ";
        cin >> experience;
    }
    void display() {
        Staff::display();
        cout << "Subject: " << subject << endl;
        cout << "Experience: " << experience << " years" << endl;
    }
};
class supportstaff: public Staff {
private:
    string department;
    string position;

public:
    void accept() {
        Staff::accept();
        cout << "Enter Department: ";
       cin >> department;
        cout << "Enter Position: ";
       cin >> position;
    }
    void display() {
        Staff::display();
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl; }
};
int main() {
    int n, m;
    cout << "Enter number of Teachers: ";
    cin >> n;
    cout << "Enter number of Support Staff: ";
    cin >> m;
    Teacher teachers[n];        
    supportstaff staffs[m];     
    cout << "\n--- Enter Teacher Details ---\n";
    for (int i = 0; i < n; i++) {
        cout << "\nTeacher " << i + 1 << ":\n";
        teachers[i].accept();
    }
    cout << "\n--- Enter Support Staff Details ---\n";
    for (int i = 0; i < m; i++) {
        cout << "\nSupport Staff " << i + 1 << ":\n";
        staffs[i].accept();
    }
    cout << "\n====== Teacher Details ======\n";
    for (int i = 0; i < n; i++) {
        cout << "\nTeacher " << i + 1 << ":\n";
        teachers[i].display();
    }
    cout << "\n====== Support Staff Details ======\n";
    for (int i = 0; i < m; i++) {
        cout << "\nSupport Staff " << i + 1 << ":\n";
        staffs[i].display();
    }
    return 0;
}
