//
// Created by ddh on 2022/10/24.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) cout << i << ' ';
    }
    return 0;
}
