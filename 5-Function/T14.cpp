//
// Created by ddh on 2022/11/12.
//
#include<iostream>
using namespace std;

int Gcd(int m, int n) {
    int r = -1;
    for (int i = 1; i <= m && i <= n; ++i) {
        if (m % i == 0 && n % i == 0 && i > r) r = i;
    }
    return r;
}

int main()
{
    int m, n;
    cin >> m >> n;

    int res;
    res= Gcd(m,n);

    if(res==-1) cout<<"Input error!";
    else cout<<m/res<<"/"<<n/res;
    return 0;
}
