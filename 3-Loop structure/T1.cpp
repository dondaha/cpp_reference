//
// Created by ddh on 2022/10/23.
//
#include <iostream>

using namespace std;

int digit_of_number(long long a) {
    // 返回给定数字的位数
    int i = 0;
    while (a != 0) {
        a /= 10;
        ++i;
    }
    return i;
}

int main() {
    long long a, b, c, num, sum;
    int digit;
    bool first = true;
    cin >> a >> b;
    for (long long i = a; i <= b; ++i) {
        if (i > 1000) break; // 这个break很关键
        sum = 0;
        num = i;
        digit = digit_of_number(i);
        for (long long j = 0; j < digit; ++j) {
            c = num % 10;
            sum += c * c * c;
            num /= 10;
        }
        if (sum == i) {
            if (first) {
                cout << i;
                first = false;
            } else {
                cout << " " << i;
            }
        }
    }
    if (first) cout << "no";
    return 0;
}