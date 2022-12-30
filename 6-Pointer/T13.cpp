//
// Created by ddh on 2022/11/27.
//
#include <iostream>

using namespace std;

void add_one_day(int &year, int &month, int &day) {
    int a[12] = {31, 28 + ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0), 31, 30, 31, 30, 31, 31, 30,
                 31, 30, 31};
    ++day;
    if (day > a[month - 1]) {
        day = 1;
        ++month;
    }
    if (month > 12) {
        month = 1;
        ++year;
    }
}

int main() {
    char d[9];
    int l, year, month, day;
    cin >> d >> l;
    year = (d[0] - '0') * 1000 + (d[1] - '0') * 100 + (d[2] - '0') * 10 + (d[3] - '0');
    month = (d[4] - '0') * 10 + (d[5] - '0');
    day = (d[6] - '0') * 10 + (d[7] - '0');
    for (int i = 0; i < l; ++i) {
        add_one_day(year, month, day);
    }
    if (year > 9999) {
        cout << "out of limit!";
    } else {
        cout << year / 1000 << year / 100 % 10 << year / 10 % 10 << year % 10;
        cout << month / 10 << month % 10;
        cout << day / 10 << day % 10;
    }
    return 0;
}