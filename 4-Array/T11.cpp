//
// Created by ddh on 2022/11/9.
//
#include <iostream>

using namespace std;

int main() {
    constexpr int MAX = 80;
    char s[MAX], a;
    int i = 0, end = -1;
    cin.getline(s, MAX);
    cin.get(a);
    while (s[i] != '\0') {
        if (s[i] == a) {
            end = i;
        }
        ++i;
    }
    if (end >= 0) cout << end;
    else cout << "Not Found";
    return 0;
}