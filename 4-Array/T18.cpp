//
// Created by ddh on 2022/11/10.
//
#include <iostream>

using namespace std;

void findMax(int a[], int l, int *max_n) {
    // 分治法
    int max1_n, max2_n;
    switch (l) {
        case 1:
            *max_n = 0;
            return;
        case 2:
            if (a[0] >= a[1]) {
                *max_n = 0;
            } else {
                *max_n = 1;
            }
            return;
        default:
            findMax(a, l / 2, &max1_n);
            findMax(a + l / 2, l - l / 2, &max2_n);
            if (a[max1_n] > a[max2_n + l / 2]) {
                *max_n = max1_n;
            } else {
                *max_n = max2_n + l / 2;
            }
            return;
    }
}

int main() {
    int mat[20] = {0};
    int n, x, max_n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x;
            mat[i] += x;
        }
    }
    findMax(mat, n, &max_n);
    cout << max_n;
    return 0;
}