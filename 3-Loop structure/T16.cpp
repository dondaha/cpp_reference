#include "iostream"

using namespace std;

//计算组合数C(a,b)的函数
long long C(int a, int b) {
    long long c = 1;
    if (a - b < b) b = a - b;
    for (int i = a - b + 1; i <= a; ++i) {
        c *= i;
    }
    for (int i = 1; i <= b; ++i) {
        c /= i;
    }
    return c;
}

int main() {
    int n;
    long long sum = 0;
    cin >> n;
    for (int i = 0; i <= n / 2; ++i) {
        sum += C(n - i, i);
    }
    cout << sum;
    return 0;
}