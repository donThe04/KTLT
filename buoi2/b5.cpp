#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex operator + (Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex operator - (Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex operator * (Complex a, Complex b) {
    Complex result;
    result.real  =a.real*b.real - a.imag*b.imag;
    result.imag = a.real*b.imag + a.imag*b.real;
    return result;
}

Complex operator / (Complex a, Complex b) {
    Complex result;
    result.real = (a.real*b.real + a.imag*b.imag)/(b.real*b.real + b.imag*b.imag);
    result.imag = (a.imag*b.real - a.real*b.imag)/(b.real*b.real + b.imag*b.imag);
    return result;
}

ostream& operator << (ostream& out, const Complex &a) {
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}

int main() {
    double real_a, real_b, img_a, img_b;
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;

    Complex a{real_a, img_a};
    Complex b{real_b, img_b};

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

    return 0;
}