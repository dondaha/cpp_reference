#include "iostream"

using namespace std;

int abs(int a) {
    return a < 0 ? -a : a;
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; ++i) {
        for (int j = 0; j < abs(n - i); ++j) {
            cout << ' ';
        }
        for (int j = 0; j < 2 * n - 1 - 2 * abs(i - n); ++j) {
            cout << '+';
        }
        cout << '\n';
    }
    return 0;
}