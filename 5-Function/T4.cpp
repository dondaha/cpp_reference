//
// Created by ddh on 2022/11/11.
//
#include<iostream>

using namespace std;

void valid(int n) {
    while (n != 1) {
        cout << n << ' ';
        if (n % 2 == 1) n = 3 * n + 1;
        else n /= 2;
    }
    cout << n;
}

int main() {
    int n;
    cin >> n;
    valid(n);
    return 0;
}
