//
// Created by ddh on 2022/11/25.
//
#include <iostream>
#include "cstring"

using namespace std;

void getDate(int &day, int &month, int &year);

void getDate(int &day, int &month, int &year) {
    char input[20];
    day = month = year = 0;
    cin.getline(input, 20);
    int yi;
    if (input[1] == '-') {
        day = input[0] - '0';
        yi = 2;
    } else {
        day = (input[0] - '0') * 10 + input[1] - '0';
        yi = 3;
    }
    char s_m[4] = {input[yi], input[yi + 1], input[yi + 2], '\0'};
    char *m[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 12; ++i) {
        if (strcmp(s_m, m[i]) == 0) {
            month = i + 1;
            break;
        }
    }
    year = (input[yi + 4] - '0') * 10 + input[yi + 5] - '0';
}

int main() {
    int day, month, year;
    getDate(day, month, year);
    cout << day << " " << month << " " << year << endl;
    return 0;
}