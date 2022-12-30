//
// Created by ddh on 2022/11/11.
//
#include<iostream>

using namespace std;

void printInt(int n, int base);

char num_to_char(int x);

char num_to_char(int x) {
    if (x < 10) return x + '0';
    else return x - 10 + 'A';
}

void printInt(int n, int base) {
    char s[32];
    int i = 0;
    while (n != 0) {
        s[i++] = num_to_char(n % base);
        n /= base;
    }
    for (i--; i >= 0; --i) {
        cout << s[i];
    }
}

int main() {
    int n, base;
    cin >> n >> base;
    printInt(n, base);
    return 0;
}
