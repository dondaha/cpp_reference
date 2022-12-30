//
// Created by ddh on 2022/12/17.
//

#ifndef _clock_h_
#define _clock_h_

class Clock {
private:
    int h, m, s;
public:
    Clock(int, int, int);

    Clock(int);

    void change(int, int, int);

    void print();

    int calculate_s();
};

#endif
