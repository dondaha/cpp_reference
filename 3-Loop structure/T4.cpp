//
// Created by ddh on 2022/10/23.
//
#include <iostream>

using namespace std;

int f(int a) {
    int sum = 0;
    while (a != 0) {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}

int main() {
    int a;
    cin >> a;
    for (int i = 0; i < 10; ++i) {
        a = f(a);
    }
    cout << a;
    return 0;
}
