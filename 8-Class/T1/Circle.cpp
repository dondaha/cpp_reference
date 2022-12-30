//
// Created by ddh on 2022/12/16.
//

#include "Circle.h" //ice里是circle.h

using namespace std;

Circle::Circle(int x0, int y0, int r0) {
    x = x0;
    y = y0;
    r = r0;
}

void Circle::getO(int &x0, int &y0) {
    x0 = x;
    y0 = y;
}

int Circle::getR() {
    return r;
}

void Circle::move(int move_x, int move_y) {
    x += move_x;
    y += move_y;
}

void Circle::setR(int new_r) {
    r = new_r;
}