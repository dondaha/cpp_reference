//第1关：成绩转换
// Created by 董道航 on 2022/10/16.
//本关任务：编写一个成绩转换程序，对于输入的成绩 n，转换规则如下：A档为 90-100，B 档是 80-89，C 档是 70-79，D 档是 60-69，F 档是 0-59。
//注意：编程过程中，可以采用if 语句，嵌套 if 语句或 switch 语句实现。请分别尝试各种语句的用法。
//根据提示，在右侧编辑器补充代码，输入描述：一个非负整数 n(0<=n<=100)。
//输出描述：对应的等级，一个字符 x ∈{A,B,C,D,F}。
#include "iostream"
using namespace std;

int main()
{
    int n;//初始分数变量
    cin>>n;
    int a=n/10;
    switch (a) {
        case 10:
        case 9:cout<<'A';
            break;
        case 8:cout<<'B';
            break;
        case 7:cout<<'C';
            break;
        case 6:cout<<'D';
            break;
        default:cout<<'F';
    }
    return 0;
}