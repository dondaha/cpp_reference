#include <iostream>

using namespace std;
//在ice里用了6s<10s，应该能继续优化
int main() {
    int n, p, num = 0, temp;
    cin >> n >> p;
    for (int i = p; i <= n; i=i+p) {
        if (i % p == 0) {
            temp = i;
            while (temp % p == 0) {
                temp /= p;
                ++num;
            }
        }
    }
    cout << num;
    return 0;
}