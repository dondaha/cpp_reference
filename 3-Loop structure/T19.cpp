#include "iostream"

using namespace std;

bool is_perfect_number(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0) sum += i;
    }
    return sum == n;
}

int main() {
    int m, n;
    bool flag = false;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        if (is_perfect_number(i)) {
            cout << i << ' ';
            flag = true;
        }
    }
    if (!flag) cout << -1;
    return 0;
}