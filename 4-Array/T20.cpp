//
// Created by ddh on 2022/11/10.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char s[100];
    cin.getline(s, 100);
    int freq[26] = {0};
    int i = 0, l_max = 0, l = 0;
    while (s[i] != '\0') {
        if (freq[s[i] - 'a'] == 0) ++freq[s[i] - 'a'];
        else {
            if (l > l_max) l_max = l;
            l = 0;
            memset(freq, 0, sizeof(freq));
            continue;
        }
        ++l;
        ++i;
    }
    cout << l_max;
    return 0;
}