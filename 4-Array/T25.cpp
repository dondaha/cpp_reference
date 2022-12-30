//
// Created by ddh on 2022/11/11.
//
#include <iostream>
#include <cstring>

using namespace std;

void getPosition(int i, int n, int *x, int *y) {
    if (n > 2) {
        *x = (i + 1) / (2 * (n - 1)) * (n - 1) - 1;
        if (((i + 1) % (2 * (n - 1))) <= n && (i + 1) % (2 * (n - 1)) >= 1) {
            *x += 1;
            *y = (i + 1) % (2 * (n - 1)) - 1;
        } else if ((i + 1) % (2 * (n - 1)) >= n + 1 && (i + 1) % (2 * (n - 1)) <= 2 * (n - 1)) {
            *x += (i + 1) % (2 * (n - 1)) - n + 1;
            *y = n - ((i + 1) % (2 * (n - 1)) - n + 1);
        } else {
            *y = 1;
        }
    } else if (n == 2) {
        if ((i + 1) % 2 == 1) *y = 0; else *y = 1;
        *x = i / 2;
    } else if (n == 1) {
        *x = i;
        *y = 0;
    }
}

int main() {
    int n, l = 0;
    char s[30];
    char z[30][30];
    memset(z, '\0', sizeof(z));
    cin >> n;
    cin.ignore();
    cin.getline(s, 30);
    int x, y;
    for (; s[l] != '\0'; ++l) {
        getPosition(l, n, &x, &y);
        z[y][x] = s[l];
    }
    for (auto &i: z) {
        for (char j: i) {
            if (j != '\0') cout << j;
        }
    }
    return 0;
}