//
// Created by ddh on 2022/11/11.
//
#include<iostream>
#include<algorithm>

using namespace std;
int t = 0;

int swim(int p[], int n) {
    int t1, t2;
    if (n == 3) {
        t += p[0] + p[1] + p[2];
        return t;
    } else if (n == 2) {
        t += p[1];
        return t;
    }
    t1 = 2 * p[1] + p[0] + p[n - 1];
    t2 = 2 * p[0] + p[n - 1] + p[n - 2];
    t += t1 < t2 ? t1 : t2;
    return swim(p, n - 2);
}

int main() {
    int n, p[1000], i;
    cin >> n;
    for (i = 0; i < n; i++) cin >> p[i];
    sort(p, p + n);
    cout << swim(p, n);
    return 0;
}
