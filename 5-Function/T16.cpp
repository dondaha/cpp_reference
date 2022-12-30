//
// Created by ddh on 2022/11/12.
//
#include<iostream>

using namespace std;

int fun(int n) {
    if (n == 1) return 10;
    return fun(n - 1) + 2;
}

int main() {
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}
