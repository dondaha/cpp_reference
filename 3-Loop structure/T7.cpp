//
// Created by ddh on 2022/10/24.
//
#include "iostream"

using namespace std;
int a[1000] = {0};

int main() {
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << a[n - 2];
    return 0;
}