#include "mystack.h"

mystack::mystack(int n) {
    head = new int[n];
    l_max = n;
    l = 0;
}

mystack::~mystack() {
    delete[] head;
}

int mystack::isempty() const {
    if (l > 0) return 0;
    else return 1;
}

int mystack::isfull() const {
    if (l == l_max) return 1;
    else return 0;
}

bool mystack::push(int a) {
    if (l >= l_max) return false;
    else {
        head[l++] = a;
    }
    return true;
}

bool mystack::pop(int &a) {
    if (l > 0) {
        a = head[--l];
        return true;
    } else {
        return false;
    }
}