//
// Created by ddh on 2022/11/12.
//
#include "iostream"
using namespace std;
int Func(int n) {
    int max = -1;
    if (n < 1000 || n > 1000000) return -1;
    for (int i = 100; i < 1000; ++i) {
        if (n % i == 0 && i > max) max = i;
    }
    return max;
}
int main(){
    int n;
    cin>>n;
    cout<<Func(n);
}