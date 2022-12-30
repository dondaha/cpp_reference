//
// Created by ddh on 2022/11/7.
//
#include "iostream"

using namespace std;

char f1(int a) {
    if (a < 10) return char(a + '0');
    else return char(a - 10 + 'A');
}

int main() {
    int B, temp, j, j1;
    bool flag;
    char number[16] = {0};
    char d[8] = {0};
    cin >> B;
    for (int i = 1; i <= 200; ++i) {
        j = 0, j1 = 0;
        flag = true;
        temp = i * i;
        // 转化进制
        while (temp != 0) {
            number[j++] = f1(temp % B);
            temp /= B;
        }
        for (int k = 0; k < j / 2; ++k) {
            if (number[k] != number[j - 1 - k]) {
                flag = false;
                break;
            }
        }
        temp = i;
        // 转化进制
        while (temp != 0) {
            d[j1++] = f1(temp % B);
            temp /= B;
        }
        if (flag) {
            for (int k = j1 - 1; k >= 0; --k) {
                cout << d[k];
            }
            cout << ' ';
            for (int k = j - 1; k >= 0; --k) {
                cout << number[k];
            }
            cout << endl;
        }
    }
}
