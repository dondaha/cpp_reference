#include <cstring>
#include "LongLongInt.h"


using namespace std;

LongLongInt sum(const LongLongInt &x1, const LongLongInt &x2) {
    LongLongInt r;
    int temp;
    for (int i = 0; i < strlen(x1.p) || i < strlen(x2.p); ++i) {
        temp = 0;
        if (x1.p[i] != '\0') {
            temp += x1.p[i] - '0';
        }
        if (x2.p[i] != '\0') {
            temp += x2.p[i] - '0';
        }
        if (r.p[i] == '\0') {
            r.p[i] = temp % 10 + '0';
        } else{
            r.p[i] += temp % 10;
            if (r.p[i]=='0'+10){
                r.p[i+1]='1';
                r.p[i]='0';
            }
        }
        if (temp >= 10) {
            if (r.p[i+1]=='\0'){
                r.p[i + 1] = temp / 10 + '0';
            } else{
                r.p[i+1]+=temp/10;
            }
        }
    }
    r.reverse();
    return r;
}

int main() {
    LongLongInt x1;
    LongLongInt x2;
    x1.read();
    x2.read();
    sum(x1, x2).show();
    return 0;
}
