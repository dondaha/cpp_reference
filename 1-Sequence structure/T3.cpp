#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c;
    cin >> n;
    c = n % 10;
    b = (n - c) / 10 % 10;
    a = (n - c - 10 * b) / 100 % 10;
    cout << a << " " << b << " " << c << endl;
    return 0;
}