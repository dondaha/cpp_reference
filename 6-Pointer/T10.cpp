//
// Created by ddh on 2022/11/26.
//
#include <iostream>
#include "cstring"
using namespace std;

char *oddstr(char str[]) {
    char *r;
    r = new char[101];
    for (int i = 1; i < strlen(str); i = i + 2) {
        r[i / 2] = str[i];
    }
    r[strlen(str) / 2] = '\0';
    return r;
}
int main() {
    char str[200];
    cin >> str;
    char *odd = oddstr(str);
    cout << odd << endl;
    delete []odd;
    return 0;
}