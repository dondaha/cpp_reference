//
// Created by ddh on 2022/11/9.
//
#include <iostream>

using namespace std;

int main() {
    char x, yy[5] = {'a', 'e', 'i', 'o', 'u'};
    int sum = 0;
    while (cin >> x) {
        for (char i : yy) {
            if (x == i || i == char(x - 'A' + 'a')) ++sum;
        }
    }
    cout << sum;
    return 0;
}