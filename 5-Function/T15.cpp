//
// Created by ddh on 2022/11/12.
//
#include<iostream>

using namespace std;

int Gcd(int a, int b) {
    if (a == b) return a;
    else if (a > b) return Gcd(a - b, b);
    else return Gcd(a, b - a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << Gcd(a, b);
    return 0;
}
