//
// Created by ddh on 2022/11/10.
//
#include <iostream>

using namespace std;

int main() {
    int N, L, t_min, t_max;
    cin >> N >> L;
    int *x, *t;
    x = new int[N];
    t = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> x[i];
    }
    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) t[i] = L - x[i];
        else t[i] = x[i];
    }
    delete[] x;
    t_min = t_max = t[0];
    for (int i = 0; i < N; ++i) {
        if (t[i] < t_min) t_min = t[i];
        if (t[i] > t_max) t_max = t[i];
    }
    delete[] t;
    cout << t_min << ' ' << t_max;
    return 0;
}