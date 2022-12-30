//
// Created by ddh on 2022/11/10.
// 插入排序
#include <iostream>

using namespace std;

int main() {
    int n, temp, j;
    cin >> n;
    int *a;
    a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i < n; ++i) {
        temp = a[i];
        j = i - 1;
        while (a[j] > temp && j >= 0) {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = temp;
    }
    cout << a[0];
    for (int i = 1; i < n; ++i) {
        cout << ' ' << a[i];
    }
    return 0;
}