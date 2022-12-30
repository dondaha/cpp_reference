#include<iostream>
using namespace std;

char NumToChar(int num)  // 定义一个将数字转化为所需字母的函数
{
    return char(num + 77);
}

int main()
{
    int n, a, b, c, d;
    cin >> n;
    // 先读取4个位置上的数字
    d = n % 10;
    c = (n - d) / 10 % 10;
    b = (n - c * 10 - d) / 100 % 10;
    a = (n - b * 100 - c * 10 - d) / 1000 % 10;
    //调用函数并输出加密结果
    cout << NumToChar(a) << NumToChar(b) << NumToChar(c) << NumToChar(d);
    return 0;
}