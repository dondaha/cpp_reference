//
// Created by ddh on 2022/11/12.
//
#include "iostream"

using namespace std;

int magic(int m) {
    // ddh最终交上去的答案
    for (int i = 1; i <= m / 122 && i <= 9; ++i) {
        for (int j = 0; j <= (m - 122 * i) / 212 && j <= 9; ++j) {
            for (int k = 0; k <= (m - 122 * i - 212 * j) / 221 && k <= 9; ++k) {
                if (122 * i + 212 * j + 221 * k == m) return 100 * i + 10 * j + k;
            }
        }
    }
    return -1;
}

int magic1(int m) {
    //i需要从1开始，否则需要在最后加一个判断范围输出
    for (int i = 0; i <= 9; ++i) {
        for (int j = 0; j <= 9; ++j) {
            for (int k = 0; k <= 9; ++k) {
                if (122 * i + 212 * j + 221 * k == m)
                    return ((100 * i + 10 * j + k > 999) || (100 * i + 10 * j + k < 100)) ? -1 : 100 * i + 10 * j + k;
            }
        }
    }
    return -1;
}

int magic2(int m) {
    //从1开始直接到9
    for (int i = 1; i <= 9; ++i) {
        for (int j = 0; j <= 9; ++j) {
            for (int k = 0; k <= 9; ++k) {
                if (122 * i + 212 * j + 221 * k == m) return 100 * i + 10 * j + k;
            }
        }
    }
    return -1;
}

// 测试三个函数是否结果有差异的代码
int main() {
    int a, b, c;
    for (int i = 122; i <= 4995; ++i) {
        a = magic(i);
        b = magic1(i);
        c = magic2(i);
        if (a != b || a != c || b != c) cout << i << '\t' << a << '\t' << b << '\t' << c << endl;
    }
}
