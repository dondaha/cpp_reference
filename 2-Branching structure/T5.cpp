//第5关：字符转换
//本关任务：从键盘输入一个字符，如果是大写字母，就转换为小写；如果是小写字母，就转换成大写，如果是其他字符就保持原样输出。
//根据提示，在右侧编辑器补充代码，用键盘输入一个任意字符，输出转换后的字符
//测试输入：a
//预期输出：A
//测试输入：5
//预期输出：5
#include <iostream>

using namespace std;

int main() {
    char input;
    cin >> input;
    if (input >= 'a' && input <= 'z') cout << char(input + 'A' - 'a');
    else if (input >= 'A' && input <= 'Z') cout << char(input + 'a' - 'A');
    else cout << input;
    return 0;
}