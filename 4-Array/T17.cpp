//
// Created by ddh on 2022/11/10.
//
#include <iostream>

using namespace std;

int main() {
    char operation;
    int a, b;
    cin >> a;
    cin.get(operation);
    cin >> b;
    cout << a << operation << b << '=';
    switch (operation) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        default:
            cout << a / b;
    }
    return 0;
}