//
// Created by ddh on 2022/11/26.
//
#include <iostream>

using namespace std;

int max(int a[], int len) {
    if (len == 1) return a[0];
    if (len == 2) return a[0] > a[1] ? a[0] : a[1];
    int x1, x2;
    x1 = max(a, len / 2);
    x2 = max(a + len / 2, len - len / 2);
    return x1 > x2 ? x1 : x2;
}

int main() {
    int n, *a, max1, max2;
    cin >> n;
    a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    max1 = max(a, n);
    for (int i = 0; i < n; ++i) {
        if (a[i] == max1) {
            for (int j = i; j < n - 1; ++j) {
                a[j] = a[j + 1];
            }
            break;
        }
    }
    max2 = max(a, n);
    cout << max1 << ' ' << max2;
    return 0;
}