//第6关：停车收费系统
// Created by 董道航 on 2022/10/16.
//本关任务：设计一停车场的收费系统。停车场有 3 类汽车，分别用 3 个字母表示。c 代表轿车，b 代表客车，t 代表卡车。收费标准如下：
//车辆类型     收费标准
//轿车(c)     三小时内，每小时5元。三小时后，每小时10元。
//客车(b)     两小时内，每小时10 元。两小时后，每小时15元。
//卡车(t)     一小时内，每小时10元，一小时后，每小时15元。
//编程要求
//根据提示，在右侧编辑器补充代码，输入汽车类型(c/b/t)、入库时间（自然数）和出库时间（自然数，大于入库时间），输出应交的停车费
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：b 7 9
//预期输出：
//20
#include <iostream>

using namespace std;

int main() {
    char car_type;
    int t_in, t_out;
    cin >> car_type >> t_in >> t_out;
    int t = t_out - t_in;
    if (car_type == 'c') {
        if (t <= 3) cout << 5 * t;
        else cout << 5 * 3 + (t - 3) * 10;
    } else if (car_type == 'b') {
        if (t <= 2) cout << t * 10;
        else cout << 2 * 10 + (t - 2) * 15;
    } else if (car_type == 't') {
        if (t <= 1) cout << t * 10;
        else cout << 1 * 10 + (t - 1) * 15;
    }
    return 0;
}