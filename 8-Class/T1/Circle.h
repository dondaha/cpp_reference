//
// Created by ddh on 2022/12/16.
//

#ifndef _CIRCLE_H
#define _CIRCLE_H

#include "iostream"

using namespace std;

class Circle {
private:
    int x, y, r;
public:
    Circle(int, int, int);

    void getO(int &, int &);

    int getR();

    void move(int, int);

    void setR(int);
};

#endif
