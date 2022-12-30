//
// Created by ddh on 2022/12/18.
//

#ifndef _MYSTACK_H
#define _MYSTACK_H

class mystack {
private:
    int *head;
    int *tail;
    int l_max = 100;
    int l;
public:
    mystack(int);

    ~mystack();

    int isempty() const;

    int isfull() const;

    bool push(int);

    bool pop(int &);
};

#endif
