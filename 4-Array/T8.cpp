//
// Created by ddh on 2022/11/8.
//
#include <iostream>

using namespace std;
int mat[10][10];
int m, n;

bool isSaddle(int i, int j) {
    for (int k = 0; k < m; ++k) {
        if (mat[i][j] > mat[k][j]) return false;
    }
    for (int k = 0; k < n; ++k) {
        if (mat[i][j] < mat[i][k]) return false;
    }
    return true;
}

int main() {
    bool flag = false;
    cin >> m >> n;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (isSaddle(i, j)) {
                cout << "mat[" << i << "][" << j << "]=" << mat[i][j] << '\n';
                flag = true;
            }
        }
    }
    if (!flag) cout << "Not Found";
    return 0;
}