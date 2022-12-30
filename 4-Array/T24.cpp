//
// Created by ddh on 2022/11/10.
//
#include <iostream>
#include <cstring>

using namespace std;
constexpr int N = 5;

int p(int n);

void change(bool light[][N], int i, int j);

bool judge(bool light[][N]);

int p(int n) {
    int r = 1;
    for (int i = 0; i < n; ++i) {
        r *= 2;
    }
    return r;
}

void change(bool light[][N], int i, int j) {
    light[i][j] = !light[i][j];
    if (i == 0) {
        light[i + 1][j] = !light[i + 1][j];
    } else if (i == N - 1) {
        light[i - 1][j] = !light[i - 1][j];
    } else {
        light[i + 1][j] = !light[i + 1][j];
        light[i - 1][j] = !light[i - 1][j];
    }
    if (j == 0) {
        light[i][j + 1] = !light[i][j + 1];
    } else if (j == N - 1) {
        light[i][j - 1] = !light[i][j - 1];
    } else {
        light[i][j + 1] = !light[i][j + 1];
        light[i][j - 1] = !light[i][j - 1];
    }
}

bool judge(bool light[][N]) {
    for (int i = 0; i < 5; ++i) {
        if (!light[4][i]) return false;
    }
    return true;
}

int main() {
    char x;
    int min = -1, temp;
    bool light[N][N], copy[N][N], d[N][N];
    for (auto &i: light) {
        for (bool &j: i) {
            cin >> x;
            if (x == '1') j = true;
            else j = false;
        }
    }
    for (int i = 0; i < p(5); ++i) {
        memcpy(copy, light, sizeof(light));
        memset(d, false, sizeof(d));
        temp = 0;
        for (int j = 0; j < 5; ++j) {
            if (i / p(j) % 2 == 1) {
                change(copy, 0, j);
                ++temp;
            }
        }
        for (int j = 1; j < 5; ++j) {
            for (int k = 0; k < 5; ++k) {
                if (!copy[j - 1][k]) {
                    change(copy, j, k);
                    ++temp;
                }
            }
        }
        if (judge(copy)) {
            if (temp < min || min == -1) min = temp;
        }
    }
    cout << min;
    return 0;
}