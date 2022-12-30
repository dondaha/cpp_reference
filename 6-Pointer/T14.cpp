//
// Created by ddh on 2022/11/27.
//
#include <iostream>
using namespace std;

int main() {
    char str1[20], str2[20];
    char c, *cp;
    cin >> str1 >> str2;
    cp = str1;
    while (*cp != '\0' && str2[cp - str1] != '\0') {
        c = *cp;
        *cp = str2[cp - str1];
        str2[cp - str1] = c;
        ++cp;
    }
    cout << str1 << endl << str2;
    return 0;
}