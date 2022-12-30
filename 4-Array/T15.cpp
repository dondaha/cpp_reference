//
// Created by ddh on 2022/11/9.
//
#include <iostream>
#include <cstdio>

using namespace std;
char str[10000];
char s1[10000];
int d1[10000];

bool isequal(char a, char b) {
    // 判断两个字符是否一致，不考虑大小写
    if (a == b || a == b + 'A' - 'a' || a == b + 'a' - 'A') return true;
    else return false;
}

int main() {
    int L = 0, j;
    int left = 0, right = 0;//定义s1中最长的回文字段，两个端点在s1中的下标
    int length = 1;//定义s1中最长回文字段的长度
    while ((str[L] = cin.get()) != EOF) ++L;
    str[L] = '\0';
    int l1 = 0, l2 = 0;
    while (str[l1] != '\0') {
        if (str[l1] >= 'a' && str[l1] <= 'z' || str[l1] >= 'A' && str[l1] <= 'Z') {
            s1[l2] = str[l1];
            d1[l2] = l1;
            ++l2;
        }
        ++l1;
    }
    s1[l2] = '\0';
    //先考虑奇数情况
    for (int i = 0; i < l2; ++i) { //i是回文中心，排除了两端点
        j = 0;
        while (isequal(s1[i - j - 1], s1[i + j + 1]) && i - j - 1 >= 0 && i + j + 1 < l2) {
            ++j;
        }
        if (2 * j + 1 > length) {
            // 如果得到了更长的那么更新一下left right和length的数据
            left = i - j;
            right = i + j;
            length = 2 * j + 1;
        }
    }
    //再考虑偶数情况
    for (int i = 0; i < l2 - 1; ++i) {
        j = 0;
        while (isequal(s1[i - j], s1[i + j + 1]) && i - j >= 0 && i + j + 1 < l2) {
            ++j;
        }
        if (2 * j > length) {
            // 如果得到了更长的那么更新一下left right和length的数据
            left = i - j + 1;
            right = i + j;
            length = 2 * j;
        }
    }
    cout << length << endl;
    for (int i = d1[left]; i <= d1[right]; ++i) {
        cout << str[i];
    }
    return 0;
}