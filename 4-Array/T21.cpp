//
// Created by ddh on 2022/11/10.
// 有待提高速度
#include <iostream>

using namespace std;

void f(const int a[], int l, int x0, int x) {
    int first, last;
    first = last = x0;
    while (first != 0 && a[first - 1] == x) --first;
    cout << first << ' ';
    while (last != l - 1 && a[last + 1] == x) ++last;
    cout << last;
}

int main() {
    int n, x, first, last, m;
    cin >> n;
    first = 0;
    last = n;
    int *a;
    a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> x;
    do {
        m = a[(first + last) / 2];
        if (m == x) {
            f(a, n, (first + last) / 2, x);
            return 0;
        } else if (m < x) {
            first = (first + last) / 2;
        } else last = (first + last) / 2;
    } while (last - first > 1);
    if (a[last] == x) f(a, n, last, x);
    else cout << -1 << ' ' << -1;
    return 0;
}