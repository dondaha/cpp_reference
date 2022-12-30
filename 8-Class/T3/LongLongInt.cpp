#include "LongLongInt.h"
#include "iostream"
#include "cstring"

using namespace std;

LongLongInt::LongLongInt() {
    p = new char[10000];
    for (int i = 0; i < 10000; ++i) {
        p[i] = '\0';
    }
}

LongLongInt::~LongLongInt() {
    delete[] p;
}

void LongLongInt::read() {
    cin >> p;
    reverse();
}

void LongLongInt::show() {
    cout << p;
}

void LongLongInt::reverse() {
    int l_r = strlen(p);
    char c_temp;
    for (int i = 0; i < l_r / 2; ++i) {
        c_temp = p[i];
        p[i] = p[l_r - i - 1];
        p[l_r - i - 1] = c_temp;
    }
}