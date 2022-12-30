//
// Created by ddh on 2022/11/12.
//
#include <iostream>

using namespace std;

int mystrstr(const char a[], const char b[]) {
    int l1 = 0, l2 = 0;
    bool flag;
    while (a[l1] != '\0') ++l1;
    while (b[l2] != '\0') ++l2;
    for (int i = 0; i < l1; ++i) {
        flag = false;
        if (a[i] == b[0] && i + l2 <= l1) {
            flag = true;
            for (int j = 0; j < l2; ++j) {
                if (a[i + j] != b[j]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) return i;
    }
    return -1;
}

int main() {
    char a[81], b[81];
    cin >> a;
    cin >> b;
    cout << mystrstr(a, b);
    return 0;
}
