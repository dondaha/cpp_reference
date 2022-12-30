//
// Created by ddh on 2022/12/17.
//
#include "clock.h"
#include "cstdio"

int Clock::calculate_s() {
    return 60 * 60 * h + 60 * m + s;
}

void Clock::print() {
    printf("%02d:%02d:%02d", h, m, s);
}

Clock::Clock(int h, int m, int s) {
    this->h = h;
    this->m = m;
    this->s = s;
}

Clock::Clock(int s) {
    this->h = s / 60 / 60;
    this->m = s / 60 % 60;
    this->s = s % 60;
}

void Clock::change(int h, int m, int s) {
    this->h = h;
    this->m = m;
    this->s = s;
}


