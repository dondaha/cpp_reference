//本关任务：所谓“回文”是一种特殊的或者文字短语。它们无论是顺读还是倒读，结果都是一样。例如，以下的几个5位整数都是回文数：12321、77777、89998 和 44774。编写一个程序，读入一个5位整数后，判断它是否是回文数。
// Created by 董道航 on 2022/10/16.
//根据提示，在右侧编辑器补充代码，输入一个5位整数，输出“Yes”或“No”
//测试输入：12321
//预期输出：
//Yes
//测试输入：12345
//预期输出：
//No
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a/10000==a%10&&a/1000%10==a/10%10) cout<<"Yes";
    else cout<<"No";
    return 0;
}