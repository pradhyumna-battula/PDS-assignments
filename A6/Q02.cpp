#include <iostream>
using namespace std;

struct Complex {
    float real;
    float imag;
};

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex c1, c2, sum;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> c1.real >> c1.imag;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> c2.real >> c2.imag;

    sum = addComplex(c1, c2);

    cout << "\nSum = " << sum.real << " + " << sum.imag << "i" << endl;

    return 0;
}
