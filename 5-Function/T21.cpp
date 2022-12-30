//
// Created by ddh on 2022/11/12.
//
#include <iostream>
#include <cstring>

using namespace std;
int V[151][1001];
int knapsack1(int n, int s[], int v[], int C) {
    if (n == 0 || C == 0) {
        return 0;
    }
    if (n > 0 && s[n - 1] > C) {
        return knapsack1(n - 1, s, v, C);
    }
    int x1, x2;
    x1 = knapsack1(n - 1, s, v, C);
    x2 = knapsack1(n - 1, s, v, C - s[n - 1]) + v[n - 1];
    return x1 > x2 ? x1 : x2;
}

int knapsack(int n, int s[], int v[], int C) {
    int V1[151][1001];
    int x1, x2, r;
    for (int i = 0; i <= n; ++i) {
        V1[i][0] = 0;
    }
    for (int i = 0; i <= C; ++i) {
        V1[0][i] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= C; ++j) {
            if (s[i - 1] > j) {
                V1[i][j] = V1[i - 1][j];
            } else {
                x1 = V1[i - 1][j];
                x2 = V1[i - 1][j - s[i - 1]] + v[i - 1];
                V1[i][j] = (x1 > x2 ? x1 : x2);
            }
        }
    }
    r = V1[n][C];
    return r;
}

int main()
{
    int n, C,s[2000], v[2000];
    cin >> C >> n;

    for (int i = 0; i < n; i++)
        cin >> s[i] >> v[i];

    cout << knapsack(n, s, v, C) << endl;

    return 0;
}
