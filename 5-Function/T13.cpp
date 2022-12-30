//
// Created by ddh on 2022/11/12.
//
#include<iostream>
using namespace std;

int GetApple(int a[], int height, int n) {
    int s = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] <= height + 30) ++s;
    }
    return s;
}

int main()
{
    int n,a[100],height;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>height;

    cout<<GetApple(a,height,n);

    return 0;
}
