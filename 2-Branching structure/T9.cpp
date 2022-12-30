//第9关：乒乓球比赛
// Created by 董道航 on 2022/10/16.
//任务描述
//本关任务：编写程序判断乒乓球比赛的结果：输入双方比分（两个非负整数），输出谁胜谁负，注意，输入的可能是一局比赛结束时的比分，也可能是比赛进行过程中的比分，还有可能是非法比分
//编程要求
//根据提示，在右侧编辑器补充代码，输入两个非负整数 a，b，使用一个空格分隔。根据输入的不同情况，输出”A win”, “B win”, “In progress”, “Illegal”
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：11 4
//预期输出：
//A win
//
//测试输入：18 9
//预期输出：
//Illegal

#include "iostream"
#include "cmath"

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a <= 10 && b <= 10) cout << "In progress";
    else if (a == 11 && b <= 9) cout << "A win";
    else if (a <= 9 && b == 11) cout << "B win";
    else if (a >= 10 && b >= 10) {
        if (a - b == 2) cout << "A win";
        else if (b - a == 2) cout << "B win";
        else if (abs(a - b) < 2) cout << "In progress";
        else cout << "Illegal";
    } else cout << "Illegal";
}