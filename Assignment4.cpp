#include <iostream>
using namespace std;
class Complex {
    float real, imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(float r, float i) {
        real = r;
        imag = i;
    }
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator*(const Complex& c) {
        return Complex(
            (real * c.real - imag * c.imag),
            (real * c.imag + imag * c.real)
        );
    }
    friend istream& operator>>(istream& in, Complex& c);
    friend ostream& operator<<(ostream& out, Complex& c);
};
istream& operator>>(istream& in, Complex& c) {
    cout << "Enter Real Part: ";
    in >> c.real;
    cout << "Enter Imaginary Part: ";
    in >> c.imag;
    return in;
}
ostream& operator<<(ostream& out, Complex& c) {
    out << c.real;
    if (c.imag >= 0)
        out << " + " << c.imag << "i";
    else
        out << " - " << -c.imag << "i";
    return out;
}
int main() {
    Complex c1, c2, c3, c4;
    cout << "Enter first complex number:\n";
    cin >> c1;
    cout << "Enter second complex number:\n";
    cin >> c2;
    c3 = c1 + c2;
    c4 = c1 * c2;
    cout << "\nFirst Complex Number: " << c1 << endl;
    cout << "Second Complex Number: " << c2 << endl;
    cout << "\nSum: " << c3 << endl;
    cout << "Product: " << c4 << endl;
    return 0;
}

