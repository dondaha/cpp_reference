#include "iostream"

using namespace std;

int main() {
    int number, digit, n = 0;
    cin >> number >> digit;
    while (number != 0) {
        if (number % 10 == digit) ++n;
        number /= 10;
    }
    cout << n;
    return 0;
}