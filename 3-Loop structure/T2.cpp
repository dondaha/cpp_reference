#include <iostream>

using namespace std;

int main() {
    int a, n;
    cin >> a >> n;
    int temp = a, sum = a;
    for (int i = 1; i < n; ++i) {
        temp = temp * 10 + a;
        sum += temp;
    }
    cout << sum;
    return 0;
}