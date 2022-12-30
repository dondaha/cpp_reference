//
// Created by ddh on 2022/10/23.
//
#include <iostream>

using namespace std;
int f[41] = {0, 1};

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n];
    return 0;
}