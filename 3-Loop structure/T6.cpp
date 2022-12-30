//
// Created by ddh on 2022/10/23.
//
#include <iostream>

using namespace std;

int rev(int a) {
    int b = 0;
    while (a % 10 == 0) a /= 10;
    while (a != 0) {
        b = 10 * b + a % 10;
        a /= 10;
    }
    return b;
}

int main() {
    int n, num = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i + rev(i) == n) ++num;
    }
    cout << num;
    return 0;
}