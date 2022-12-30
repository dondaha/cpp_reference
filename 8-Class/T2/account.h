//
// Created by ddh on 2022/12/16.
//

#ifndef _ACCOUNT_H
#define _ACCOUNT_H

#include "iostream"

using namespace std;

class SavingAccount {
private:
    double money;
    float rate;
    static int sum;
    int n;
public:
    SavingAccount(double );

    void display() const;

    void calculate();

    void changerate(float );
};

#endif
