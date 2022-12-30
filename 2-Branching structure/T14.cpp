//第14关：输出数字
// Created by 董道航 on 2022/10/17.
//任务描述
//本关任务：本关任务：按照用户指令按序输出数字
//
//编程要求
//用户输入两个整数n,m以及一个符号c，如果该符号为>则表示按照从大到小的顺序输出n和m，如果为<则表示按照从小到大的顺序输出n和m，如果是其它符号输出error
//
//测试说明
//平台会对你编写的代码进行测试：
//测试输入：7 2 <
//预期输出：
//2 7
//
//测试输入：12 34 =
//预期输出：
//error
#include <iostream>

using namespace std;

int main() {
    int a, b;
    char command;
    cin >> a >> b >> command;
    if (command == '>') {
        if (a >= b) cout << a << ' ' << b;
        else cout << b << ' ' << a;
    } else if (command == '<') {
        if (a >= b) cout << b << ' ' << a;
        else cout << a << ' ' << b;
    } else cout << "error";
    return 0;
}
