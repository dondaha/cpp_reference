//
// Created by ddh on 2022/11/25.
//
#include <iostream>
#include <cstring>
using namespace std;

bool func(char array[ ], int len) {
    if (len==1||len==0) return true;
    if (array[0]!=array[len-1]) return false;
    return func(array+1,len-2);
}


int main() {
    char ch[20];
    bool result;

    cin >> ch;

    cout<<(func(ch, strlen(ch))?"Yes":"No");

    return 0;
}