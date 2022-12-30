//
// Created by ddh on 2022/10/24.
//
#include <iostream>

using namespace std;

int main() {
    int n, n_copy, a = 0, b = 0, c = 0;
    cin >> n;
    n_copy = n;
    while (n_copy%2==0) {n_copy/=2;++a;}
    while (n_copy%3==0) {n_copy/=3;++b;}
    while (n_copy%5==0) {n_copy/=5;++c;}
    if (n_copy != 1) {
        cout << -1;
        return 0;
    }
    a += b + 2 * c;
    cout << a + b + c;
    return 0;
}
