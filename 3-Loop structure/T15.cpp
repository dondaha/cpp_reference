#include "iostream"

using namespace std;

int main() {
    int x;
    cin >> x;
    long long xi = 1;
    while (xi * xi > x || (xi + 1) * (xi + 1) <= x) {
        xi = (x + xi * xi) / (2 * xi);//牛顿法迭代
    }
    cout << xi;
    return 0;
}