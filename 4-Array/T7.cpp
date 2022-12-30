//
// Created by ddh on 2022/11/7.
//
#include "iostream"

using namespace std;
int pyramid[10][10];
int f[10][11];

int main() {
    int layer, max, m;
    cin >> layer;
    for (int i = 0; i < layer; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> pyramid[i][j];
        }
    }
    for (int i = 0; i < layer; ++i) {
        f[i][0] = 0;
    }
    f[0][1] = pyramid[0][0];
    for (int i = 1; i < layer; ++i) {
        for (int j = 1; j <= i + 1; ++j) {
            max = f[i - 1][j - 1] >= f[i - 1][j] ? f[i - 1][j - 1] : f[i - 1][j];
            f[i][j] = pyramid[i][j - 1] + max;
        }
    }
    m = 0;
    for (int i = 1; i <= layer + 1; ++i) {
        if (f[layer - 1][i] > m) m = f[layer - 1][i];
    }
    cout << m;
    return 0;
}

