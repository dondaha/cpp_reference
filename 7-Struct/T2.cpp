//
// Created by ddh on 2022/12/1.
//
#include <iostream>

using namespace std;
struct complex {
    int a;
    int b;
};

complex add(complex x, complex y) {
    complex r{};
    r.a = x.a + y.a;
    r.b = x.b + y.b;
    return r;
}

complex multiply(complex x, complex y) {
    complex r{};
    r.a = x.a * y.a - x.b * y.b;
    r.b = x.a * y.b + x.b * y.a;
    return r;
}

void showComplex(complex a) {
    if (a.a != 0) cout << a.a;
    if (a.b < 0) cout << a.b << 'i';
    if (a.b > 0) cout << '+' << a.b << 'i';
    if (a.a == 0 && a.b == 0) cout << 0;
    cout << endl;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    complex x{a, b};
    complex y = {c, d};
    cout << "x = ";
    showComplex(x);
    cout << "y = ";
    showComplex(y);
    cout << "x += y; ";
    x = add(x, y);
    cout << "x = ";
    showComplex(x);
    cout << "y *= x; ";
    y = multiply(x, y);
    cout << "y = ";
    showComplex(y);
    cout << "x + y = ";
    showComplex(add(x, y));
    cout << "y * x = ";
    showComplex(multiply(x, y));
    cout << "x = ";
    showComplex(x);
    cout << "y = ";
    showComplex(y);
    return 0;
}