//
// Created by ddh on 2022/11/10.
//
#include <iostream>

using namespace std;

int main() {
    char s[80];
    cin.getline(s, 80);
    for (int i = 1; s[i] != '\0'; i = i + 2) {
        cout << s[i];
    }
    return 0;
}