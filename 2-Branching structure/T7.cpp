//第7关：第几天
// Created by 董道航 on 2022/10/16.
//任务描述
//本关任务：输入三个正整数year、month、day分别表示年、月、日。假设输入总是合法日期，按以下步骤计算dayNum表示此日期为该年的第几天：1）dayNum=31(month-1)+day；2）二月以后的日期需要减去(4month+23)/10；3）如果是闰年则二月以后的日期需要再加1。
//编程要求
//根据提示，在右侧编辑器补充代码，输入三个正整数year、month、day，用空格分开，输出一个正整数，表示此日期为该年的第几天。
//测试说明
//平台会对你编写的代码进行测试：
//
//测试输入：2020 9 20
//预期输出：
//264
#include <iostream>
using  namespace std;
//是闰年则加1
int func(int year){
    return (year%4==0&&year%100!=0||year%400==0)?1:0;
}
int main()
{
    int year,month,day;
    int dayNum;
    cin>>year>>month>>day;
    if (month<=2) dayNum=31*(month-1)+day;
    else dayNum=31*(month-1)+day-(4*month+23)/10+func(year);
    cout<<dayNum;
    return 0;
}