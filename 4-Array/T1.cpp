//
// Created by ddh on 2022/10/30.
//
#include "iostream"

using namespace std;

int main() {
    int n, a[99], temp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (a[j] < a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
    return 0;
}