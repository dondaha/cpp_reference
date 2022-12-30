//
// Created by ddh on 2022/11/11.
//
#include<iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int m, n, sum = 0;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        if (isPrime(i)) ++sum;
    }
    cout << sum;
    return 0;
}
