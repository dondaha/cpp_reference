//
// Created by ddh on 2022/11/26.
//
#include <iostream>

using namespace std;

char *strrchr(char *str, char ch) {
    int x = -1;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ch) {
            x = i;
        }
    }
    if (x != -1) return str + x;
    else return NULL;
}

int main() {
    char str[51];
    char *w, ch;
    cin.getline(str, 50);
    cin >> ch;
    w = strrchr(str, ch);
    if (w != NULL) {
        for (int i = 0; w[i] != '\0'; ++i) {
            cout << w[i];
        }
    } else cout << "no";
    return 0;
}