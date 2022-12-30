#include <iostream>

using namespace std;
constexpr int MAX = 10000;
bool a[MAX] = {false};

int main() {
    int n, m;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> m;
        a[m] = true;
    }
    for (int i = 0; i < MAX; ++i) {
        if (!a[i]) {
            cout << i;
            break;
        }
    }
}