//
// Created by ddh on 2022/11/9.
//
#include <iostream>
using namespace std;

int e(int n) {
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= 10;
    }
    return result;
}

int main() {
    int num[80] = {0}, i = 0, s = 0;
    char x;
    while (cin >> x) {
        if (x >= '0' && x <= '9') {
            num[i++] = x - '0';
        }
    }
    int I = i;
    while (i > 0) {
        s += num[i - 1] * e(I - i);
        --i;
    }
    cout << s * 2;
    return 0;
}