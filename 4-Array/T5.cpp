//
// Created by ddh on 2022/11/7.
//
#include "iostream"

using namespace std;

int main() {
    int data[1000], x, N = 0, temp, num = 1;
    while (cin >> x) {
        data[N++] = x;
        if (cin.get() == '\n') break;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (data[i] == data[j]) {
                for (int k = j; k < N - 1; ++k) {
                    temp = data[k];
                    data[k] = data[k + 1];
                    data[k + 1] = temp;
                }
                --j;
                --N;
            }
        }
    }
    cout << N;
    for (int i = 0; i < N; ++i) {
        cout << ' ' << data[i];
    }
    return 0;
}