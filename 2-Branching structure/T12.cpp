//��12�أ��ڼ��죨2��
// Created by ������ on 2022/10/16.
//��������
//����������������������month��day��year�ֱ��ʾ�¡��ա��ꡣ���ȼ��������Ƿ��ʾһ���Ϸ������ڣ�����ǺϷ����������²������dayNum��ʾ������Ϊ����ĵڼ��죺1��dayNum=31(month-1)+day��2�������Ժ��������Ҫ��ȥ(4month+23)/10��3�����������������Ժ��������Ҫ�ټ�1����������������������
//
//���Ҫ��
//������ʾ�����Ҳ�༭��������룬��������������year��month��day���ÿո�ֿ������һ������������ʾ������Ϊ����ĵڼ��죬�������Illegal����ʾ����һ���Ϸ������ڡ�(���ⲻ��ʹ������)
//
//����˵��
//ƽ̨������д�Ĵ�����в��ԣ�
//
//�������룺2020 9 20
//Ԥ�������
//264
//
//�������룺2100 2 29
//Ԥ�������
//Illegal
#include <iostream>

using namespace std;

//���������1
int func(int year) {
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ? 1 : 0;
}

void CalculateDays(int year, int month, int day) {
    int dayNum;
    if (month <= 2) dayNum = 31 * (month - 1) + day;
    else dayNum = 31 * (month - 1) + day - (4 * month + 23) / 10 + func(year);
    cout << dayNum;
}

int main() {
    int year, month, day;
    cin >> year >> month >> day;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if (day > 31) {
                cout << "Illegal";
                return 0;
            } else break;
        case 4:
        case 6:
        case 9:
        case 11:
            if (day > 30) {
                cout << "Illegal";
                return 0;
            } else break;
        case 2:
            //cout<<"������ݣ���"<<func(year)<<endl;
            if (day > 27 + func(year)) {
                cout << "Illegal";
                return 0;
            } else break;
        default:
            cout << "Illegal";
            return 0;
    }
    CalculateDays(year, month, day);
}