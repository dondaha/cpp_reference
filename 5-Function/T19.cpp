//
// Created by ddh on 2022/11/12.
//
#include <iostream>
using namespace std;

long long quickPow(int n, int k) {
    long long temp;
    if (k == 0) return 1;
    if (k == 1) return n;
    if (k % 2 == 0) {
        temp = quickPow(n, k / 2);
        return temp * temp;
    } else {
        temp = quickPow(n, k / 2);
        return n * temp * temp;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << quickPow(n, k);
    return 0;
}
