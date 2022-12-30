//
// Created by ddh on 2022/11/11.
//
#include<iostream>

using namespace std;

bool perfectNumber(int n) {
    int s = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) s += i;
    }
    if (s == n) return true;
    else return false;
}

int main() {
    int m, n;
    bool flag = false;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        if (perfectNumber(i)) {
            flag = true;
            cout << i << ' ';
        }
    }
    if (!flag) cout << -1;
    return 0;
}
