//#include <iostream>
#include <cstdio>
#include "clock.h"

using namespace std;

int abs(int a) {
    return a > 0 ? a : -a;
}

int main() {
    int h, m, s;
    scanf("%d:%d:%d", &h, &m, &s);
    Clock t1(h, m, s);
    scanf("%d:%d:%d", &h, &m, &s);
    Clock t2(h, m, s);
    int d = abs(t1.calculate_s() - t2.calculate_s());
    Clock dt(d);
    dt.print();
    return 0;
}
