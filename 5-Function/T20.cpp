//
// Created by ddh on 2022/11/12.
// 并归排序
#include<iostream>

using namespace std;

void merge(int A[], int low, int mid, int high) {
    int arr[100];
    int i = 0, i1 = low, i2 = mid + 1;
    for (; i1 <= mid || i2 <= high; ++i) {
        if (i1 <= mid && i2 <= high) {
            if (A[i1] < A[i2]) {
                arr[i] = A[i1];
                ++i1;
            } else {
                arr[i] = A[i2];
                ++i2;
            }
        } else if (i1 <= mid && i2 > high) {
            arr[i] = A[i1];
            ++i1;
        } else if (i2 <= high && i1 > mid) {
            arr[i] = A[i2];
            ++i2;
        }
    }
    for (int j = 0; j < i; ++j) {
        A[j + low] = arr[j];
    }
}

void sort(int A[], int low, int high) {
    int mid;
    if (high > low) {
        mid = (low + high) / 2;
        sort(A, low, mid);
        sort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

void merge_Sort(int A[], int n) {
    sort(A, 0, n - 1);
}

int main() {
    int n, num[100];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    merge_Sort(num, n);
    cout << num[0];
    for (int i = 1; i < n; ++i) {
        cout << ' ' << num[i];
    }
    return 0;
}
