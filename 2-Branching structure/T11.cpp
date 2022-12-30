//第11关：鸡兔同笼
// Created by 董道航 on 2022/10/16.
//任务描述
//本关任务：已知鸡和兔的总数量为n，腿的总数量为m，求鸡和兔的数量
//编程要求
//根据提示，在右侧编辑器补充代码，输入两个正整数n和m，用一个空格分开，输出鸡和兔的数目
//
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：14 32
//预期输出：
//12 2
//输出说明：鸡的数目为12，兔的数目为2
//
//测试输入：10 16
//预期输出：
//no solution
//输出说明：无解
#include <iostream>
using  namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int y=m/2-n;
    int x=n-y;
    if (m%2==0&&m-2*n>=0&&4*n-m>=0) cout<<x<<' '<<y;
    else cout<<"no solution";
    return 0;
}