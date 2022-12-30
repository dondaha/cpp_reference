//第12关：第几天（2）
// Created by 董道航 on 2022/10/16.
//任务描述
//本关任务：输入三个正整数month、day、year分别表示月、日、年。首先检验输入是否表示一个合法的日期，如果是合法日期则按以下步骤计算dayNum表示此日期为该年的第几天：1）dayNum=31(month-1)+day；2）二月以后的日期需要减去(4month+23)/10；3）如果是闰年则二月以后的日期需要再加1。假设输入总是正整数。
//
//编程要求
//根据提示，在右侧编辑器补充代码，输入三个正整数year、month、day，用空格分开。输出一个正整数，表示此日期为该年的第几天，或者输出Illegal，表示不是一个合法的日期。(本题不得使用数组)
//
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：2020 9 20
//预期输出：
//264
//
//测试输入：2100 2 29
//预期输出：
//Illegal
#include <iostream>

using namespace std;

//是闰年则加1
int func(int year) {
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0;
}

void CalculateDays(int year, int month, int day) {
    int dayNum;
    if (month <= 2) dayNum = 31 * (month - 1) + day;
    else dayNum = 31 * (month - 1) + day - (4 * month + 23) / 10 + func(year);
    cout << dayNum;
}

int main() {
    int year, month, day;
    cin >> year >> month >> day;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31) {
                cout << "Illegal";
                return 0;
            } else break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30) {
                cout << "Illegal";
                return 0;
            } else break;
        case 2:
            //cout<<"根据年份，加"<<func(year)<<endl;
            if (day > 27 + func(year)) {
                cout << "Illegal";
                return 0;
            } else break;
        default:
            cout << "Illegal";
            return 0;
    }
    CalculateDays(year, month, day);
}