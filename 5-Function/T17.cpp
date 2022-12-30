//
// Created by ddh on 2022/11/12.
//
#include<iostream>

using namespace std;

void Insert_Sort(int A[], int n) {
    int temp;
    if (n > 0) {
        Insert_Sort(A, n - 1); //递归将前面n-1个元素排序好
        // 你的代码，把第n个元素插入到前面n-1个元素中
        temp = A[n - 1];
        if (A[0] > A[n - 1]) {
            for (int i = n - 1; i > 0; --i) {
                A[i] = A[i - 1];
            }
            A[0] = temp;
        } else {
            for (int i = 0; i < n - 1; ++i) {
                if (A[i] <= A[n - 1] && A[n - 1] <= A[i + 1]) {
                    for (int j = n - 1; j > i + 1; --j) {
                        A[j] = A[j - 1];
                    }
                    A[i + 1] = temp;
                    break;
                }
            }
        }
    }
}

int main() {
    int n, num[1000];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    Insert_Sort(num, n);
    cout << num[0];
    for (int i = 1; i < n; ++i) {
        cout << ' ' << num[i];
    }

    return 0;
}
