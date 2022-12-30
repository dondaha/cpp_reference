//
// Created by ddh on 2022/11/26.
//
#include <iostream>
#include "cstring"

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.get();
    char *s[30], ch, *temp;
    for (int i = 0; i < n; ++i) {
        s[i] = new char[31];
        cin.getline(s[i], 30);
    }
    //cin.get();
    cin >> ch;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < strlen(s[i]); ++j) {
            if (s[i][j] == ch) {
                for (int k = j; k < strlen(s[i]); ++k) {
                    s[i][k] = s[i][k + 1];
                }
                --j;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strcmp(s[j], s[j + 1]) < 0) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << s[i] << endl;
    }
    return 0;
}