//
// Created by ddh on 2022/11/9.
//
#include <iostream>

using namespace std;

int main() {
    char str1[161], str2[161];
    int l1 = 0, l2 = 0;
    bool flag;
    cin.getline(str1, 161);
    cin.getline(str2, 161);
    while (str1[l1] != '\0') ++l1;
    while (str2[l2] != '\0') ++l2;
    for (int i = 0; i < l1; ++i) {
        if (str1[i] == str2[0]) {
            if (i + l2 > l1) {
                cout << -1;
                return 0;
            }
            flag = true;
            for (int j = 0; j < l2; ++j) {
                if (str1[i + j] != str2[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                cout << i;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}