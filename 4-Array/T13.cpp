//
// Created by ddh on 2022/11/9.
//
#include <iostream>

using namespace std;

int main() {
    int n, en = 0, num = 0, other = 0, j;
    char s[10][81];
    cin >> n;
    cin.ignore(); //���Ե���һ�����ֺ�Ļ���
    for (int i = 0; i < n; ++i) {
        cin.getline(s[i], 80);
    }
    for (int i = 0; i < n; ++i) {
        j = 0;
        while (s[i][j] != '\0' && s[i][j] != '\n') {
            if (s[i][j] >= '0' && s[i][j] <= '9') ++num;
            else if (s[i][j] >= 'a' && s[i][j] <= 'z' || s[i][j] >= 'A' && s[i][j] <= 'Z') ++en;
            else if (s[i][j] != ' ') ++other;
            ++j;
        }
    }
    cout << "Ӣ����ĸ��" << en << '\n'
         << "���֣�" << num << '\n'
         << "�����ַ���" << other;
    return 0;
}