//
// Created by ddh on 2022/11/9.
//
#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    int array[1000];
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }
    cin >> x;
    for (int i = 0; i < n; ++i) {
        if (array[i] == x) {
            cout << i;
            break;
        }
        if ((array[i] - x) * (array[i + 1] - x) < 0 && i < n - 1) {
            cout << i + 1;
            break;
        }
    }
    if (array[0] > x) cout << 0;
    if (array[n - 1] < x) cout << n;
    return 0;
}