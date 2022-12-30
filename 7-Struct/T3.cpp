//
// Created by ddh on 2022/12/2.
//
#include <iostream>

using namespace std;
struct contact {
    char name[21];
    int year, month, day;
    char phoneNum[20];
    char address[51];
};

bool compareAge(contact a, contact b) {
    int age_a, age_b;
    age_a = a.year * 10000 + a.month * 100 + a.day;
    age_b = b.year * 10000 + b.month * 100 + b.day;
    if (age_a > age_b) return true;
    else return false;
}

int main() {
    contact *students[10], *temp;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        students[i] = new contact;
        cin >> students[i]->name >> students[i]->year >> students[i]->month >> students[i]->day
            >> students[i]->phoneNum;
        cin.get();
        cin.getline(students[i]->address, 50);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (compareAge(*students[j], *students[j + 1])) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    for (int i = n - 1; i >= 0; --i) {
        temp = students[i];
        cout << temp->name << ' ' << temp->year << ' ' << temp->month << ' ' << temp->day << ' ' << temp->phoneNum
             << ' ' << temp->address << endl;
    }
    return 0;
}
