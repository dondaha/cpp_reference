//第13关：加法
// Created by 董道航 on 2022/10/17.
//任务描述
//本关任务：编写一个能计算两整数之和的小程序。
//
//编程要求
//根据提示，在右侧编辑器补充代码，输入两个int型整数，输出和，如有溢出则发出提示信息
//
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：1 1
//预期输出：
//2
//
//测试输入：1234567890 987654321
//预期输出：
//error
#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;
    //提前检测是否溢出
    long long n = a + b;
    if (n < INT32_MIN || n > INT32_MAX) {
        cout << "error";
    } else {
        cout << n;
    }
    return 0;
}