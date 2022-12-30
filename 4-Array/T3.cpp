//
// Created by ddh on 2022/10/30.
//
#include "iostream"

using namespace std;

int cal_day(int year, int month) {
    //输入年份和月份，输出这个月多少天
    int a = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ? 1 : 0;
    int d[12] = {31, 28 + a, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    return d[month - 1];
}

int main() {
    int n, i = 1, freq[7] = {0};//分别代表周日周一...周六
    cin >> n;
    for (int year = 1900; year <= 1900 + n - 1; ++year) {
        for (int month = 1; month <= 12; ++month) {
            for (int day = 1; day <= cal_day(year, month); ++day) {
                if (day==13) ++freq[i % 7];
                ++i;
            }
        }
    }
    for (int j = 1; j < 7; ++j) {
        cout << freq[j] << ' ';
    }
    cout << freq[0];
    return 0;
}
