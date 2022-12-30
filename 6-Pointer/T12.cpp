//
// Created by ddh on 2022/11/27.
//
#include <iostream>
#include <cstring>

using namespace std;

// 写出两个函数的声明
char *&funA(char **&);

char *funB(char *, char **);

int main() {
    char a[100], b[100];
    for (int i = 0; i < 3; ++i) {
        char **p;
        cin >> a;
        funA(p) = a;
        cout << funB(b, p) << endl;
    }
    return 0;
}

// 写出两个函数的定义
char *&funA(char **&x) {
    x = new char *;
    return *x;
}

char *funB(char *x, char **y) {
    x = *y;
    delete y;
    for (int i = 0; x[i] != '\0'; ++i) {
        if (x[i] >= 'a' && x[i] <= 'z') x[i] = x[i] + 'A' - 'a';
    }
    return x;
}

