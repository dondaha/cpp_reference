#include<iostream>

using namespace std;

int de(int x) {
    if (x < 7) {
        return x + 3;
    } else {
        return x - 7;
    }
}

int encrypt(int n)  //加密函数
{
    int a, b, c, d;
    // 先读取4个位置上的数字
    d = n % 10;
    c = (n - d) / 10 % 10;
    b = (n - c * 10 - d) / 100 % 10;
    a = (n - b * 100 - c * 10 - d) / 1000 % 10;
    int c1 = (a + 7) % 10;
    int a1 = (c + 7) % 10;
    int d1 = (b + 7) % 10;
    int b1 = (d + 7) % 10;
    return a1 * 1000 + b1 * 100 + c1 * 10 + d1;
}

int decrypt(int m) //解密函数
{
    int a, b, c, d;
    // 先读取4个位置上的数字
    d = m % 10;
    c = (m - d) / 10 % 10;
    b = (m - c * 10 - d) / 100 % 10;
    a = (m - b * 100 - c * 10 - d) / 1000 % 10;
    int temp = a;
    a = c;
    c = temp;
    temp = b;
    b = d;
    d = temp;
    int a1 = de(a);
    int b1 = de(b);
    int c1 = de(c);
    int d1 = de(d);
    return a1 * 1000 + b1 * 100 + c1 * 10 + d1;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << encrypt(n) << " " << decrypt(m);
    return 0;
}