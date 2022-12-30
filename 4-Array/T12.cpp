//
// Created by ddh on 2022/11/9.
//
#include <iostream>

using namespace std;

int main() {
    constexpr int MAX = 80;
    int l = 0;
    char s[MAX], temp;
    cin.getline(s, MAX);
    while (s[l] != '\0') ++l;
    // 冒泡排序
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < l - i - 1; ++j) {
            if (s[j] < s[j + 1]) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    temp = s[0];
    cout << s[0];
    // 去重输出
    for (int i = 1; i < l; ++i) {
        if (s[i] != temp) {
            cout << s[i];
            temp = s[i];
        }
    }
    return 0;
}