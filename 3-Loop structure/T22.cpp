#include "iostream"

using namespace std;

int main() {
    int positive = 0, negative = 0;
    int i = 1;
    while (i != 0) {
        cin >> i;
        if (i > 0) ++positive;
        if (i < 0) ++negative;
    }
    cout << positive << ' ' << negative;
    return 0;
}