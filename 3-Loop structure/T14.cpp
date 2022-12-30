#include "iostream"

using namespace std;

int main() {
    int n, max = 0;
    cin >> n;
    if (n < 1000 || n > 1000000) {
        cout << "Input error!";
        return 0;
    }
    for (int i = 100; i < 1000; ++i) {
        if (n % i == 0) max = i;
    }
    if (max == 0) cout << "Not found!";
    else cout << max;
    return 0;
}