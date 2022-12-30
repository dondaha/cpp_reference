#include <iostream>

using namespace std;
struct t {
    int h;
    int m;
    int s;
};

void setTime(t &t0, int h, int m, int s) {
    t0.h = h;
    t0.m = m;
    t0.s = s;
}

void increase(t &t0) {
    t0.s++;
    if (t0.s >= 60) {
        t0.s -= 60;
        ++t0.m;
    }
    if (t0.m >= 60) {
        t0.m -= 60;
        ++t0.h;
    }
    if (t0.h >= 24) {
        t0.h -= 24;
    }
}

void showTime(t t0) {
    if (t0.h < 10) cout << 0;
    cout << t0.h << ':';
    if (t0.m < 10) cout << 0;
    cout << t0.m << ':';
    if (t0.s < 10) cout << 0;
    cout << t0.s << endl;
}

int main() {
    t *ti[2];
    int ht, mt, st;
    for (int i = 0; i < 2; ++i) {
        cin >> ht >> mt >> st;
        ti[i] = new t;
        setTime(*ti[i], ht, mt, st);
        showTime(*ti[i]);
        increase(*ti[i]);
        showTime(*ti[i]);
    }
    return 0;
}