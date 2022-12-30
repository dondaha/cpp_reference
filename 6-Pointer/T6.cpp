//
// Created by ddh on 2022/11/26.
//
#include <iostream>
#include "cstring"

using namespace std;

char *julian(int year, int day) {
    int x = year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ? 1 : 0;
    if (day <= 0 || day > 365 + x) return NULL;
    char *r;
    int sum = 0;
    r = new char[7];
    int day_in_month[12] = {31, 28 + x, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *m[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 12; ++i) {
        sum += day_in_month[i];
        if (sum >= day) {
            strcpy(r, m[i]);
            day = day - sum + day_in_month[i];
            break;
        }
    }
    r[3] = ' ';
    r[4] = char(day / 10 + '0');
    r[5] = char(day % 10 + '0');
    r[6] = '\0';
    return r;
}

int main() {
    int year, day;
    char *res;
    cin >> year >> day;
    res = julian(year, day);
    cout << res << endl;
    delete[]res;
    return 0;
}