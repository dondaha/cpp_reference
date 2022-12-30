//
// Created by ddh on 2022/10/23.
//
#include <iostream>

using namespace std;

int main() {
    int n, m, temp;
    cin >> n >> m;
    while (n != 0 && m != 0) {
        temp = m;
        m = n % m;
        n = temp;
    }
    cout << n;
    return 0;
}