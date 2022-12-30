//
// Created by ddh on 2022/11/11.
//
#include<iostream>
using namespace std;

int fib() {
    int r;
    static int a = 1, b = 0;
    r = a + b;
    a = b;
    b = r;
    return r;
}
int main(){
    for (int i = 0; i < 10; ++i) {
        cout<<fib()<<' ';
    }
}
