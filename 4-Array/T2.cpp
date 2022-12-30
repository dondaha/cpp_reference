//
// Created by ddh on 2022/10/30.
//
#include "iostream"

using namespace std;

int main() {
    int n, k;
    int a[1000];
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        a[i] = 1;
    }
    for (int i = 2; i <= k; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((j + 1) % i == 0) a[j] = 1 - a[j];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == 1) cout << i + 1 << ' ';
    }
    return 0;
}