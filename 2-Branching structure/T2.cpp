//第2关：字母判断
// Created by 董道航 on 2022/10/16.
//本关任务：对于一个输入的小写字母 c，判断该字母是元音字母还是辅音字母。对于元音字母，输出一个字符串”vowel”，对于辅音字母，输出一个字符串”consonant”。要求用 if 语句或 switch 语句实现。
//根据提示，在右侧编辑器补充代码，输入一个小写字母c(‘a’<=c<=’z’)。输出一个代表元音字母或者辅音字母的字符串。
//测试输入：c
//预期输出：consonant
#include "iostream"
using namespace std;
int main()
{
    char input;
    cin>>input;
    switch (input) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':cout<<"vowel";
            break;
        default:cout<<"consonant";
    }
    return 0;
}