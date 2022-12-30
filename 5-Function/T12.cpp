//
// Created by ddh on 2022/11/12.
//
#include "iostream"

using namespace std;

int CountDigit(int number, int digit) {
    int n = 0;
    do {
        if (number % 10 == digit) {
            ++n;
        }
        number /= 10;
    } while (number != 0);
    return n;
}

int main() {
    cout << CountDigit(0, 0);
}
