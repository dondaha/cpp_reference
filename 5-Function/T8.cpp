//
// Created by ddh on 2022/11/11.
//
#include<iostream>

using namespace std;

int f(int n) {
    if (n == 0 || n == 1) return 1;
    return n * f(n - 1);
}

int main() {
    int n, m;
    cin >> n >> m;
    if (n < m) cout << "wrong";
    else cout << f(n) / f(m) / f(n - m);
    return 0;
}
