//
// Created by ddh on 2022/12/16.
//
#include "account.h"
#include "iostream"
#include "iomanip"

using namespace std;
int SavingAccount::sum = 0;

SavingAccount::SavingAccount(double m) {
    ++sum;
    n = sum;
    money = m;
    rate = 0.05;
}

void SavingAccount::display() const {
    cout << n << ' ' << setiosflags(ios::fixed) << setprecision(2) << money << ' ' << rate << endl;
}

void SavingAccount::calculate() {
    money = money*(1+rate);
}

void SavingAccount::changerate(float new_rate) {
    rate = new_rate;
}