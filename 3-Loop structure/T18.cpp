#include "iostream"

using namespace std;

int exhaustive_method(int n);

int greedy_method(int n);

int main() {
    int n;
    cin >> n;
    cout << exhaustive_method(n) << ' ' << greedy_method(n) << endl;
    return 0;
}

int exhaustive_method(int n) {
    int min = n, m;
    for (int i = 0; i <= n / 33; ++i) {
        for (int j = 0; j <= (n - 33 * i) / 23; ++j) {
            for (int k = 0; k <= (n - 33 * i - 23 * j) / 16; ++k) {
                for (int l = 0; l <= (n - 33 * i - 23 * j - 16 * k) / 5; ++l) {
                    m = n - 33 * i - 23 * j - 16 * k - 5 * l;
                    if (i + j + k + l + m < min) min = i + j + k + l + m;
                }
            }
        }
    }
    return min;
}

int greedy_method(int n) {
    int i, j, k, l, m;
    i = n / 33;
    j = (n - 33 * i) / 23;
    k = (n - 33 * i - 23 * j) / 16;
    l = (n - 33 * i - 23 * j - 16 * k) / 5;
    m = n - 33 * i - 23 * j - 16 * k - 5 * l;
    return i + j + k + l + m;
}