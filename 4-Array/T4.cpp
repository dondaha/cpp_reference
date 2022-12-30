//
// Created by ddh on 2022/10/30.
//
#include <iostream>

using namespace std;

int main() {
    int n = 0, m = 0, numbers[1000], after[1000],tmp;
    bool flag;
    while (cin >> tmp) {
        numbers[n]=tmp;
        n++;
        if (cin.get() == '\n') break;
    }
    for (int i = 0; i < n; ++i) {
        flag = false;
        for (int j = 0; j < m; ++j) {
            if (numbers[i] == after[j]) flag = true;
        }
        if (!flag) {
            after[m] = numbers[i];
            ++m;
        }
    }
    for (int i = 0; i < m; ++i) {
        cout << after[i] << ' ';
    }
    return 0;
}