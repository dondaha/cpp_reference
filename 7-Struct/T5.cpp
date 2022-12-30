#include <iostream>

using namespace std;

struct List {
    int num;
    List *next;
};

int main() {
    List *head, *p, *q, *tail;
    int num;
    bool flag = true;

    head = NULL;
    //cout << "请输入若干个正整数（-1结束）\n";
    cin >> num;
    while (num != -1) {
        p = new List;
        p->num = num;
        if (flag) {
            flag = false;
            head = p;
            head->next = NULL;
        } else {
            p->next = q;
        }
        tail = q = p;
        cin >> num;
    }

    //cout << "按照输入顺序逆序输出\n";
    for (p = tail; p != NULL; p = p->next) {
        cout << p->num << " ";
    }
    cout << endl;

    for (p = tail; p != NULL; p = q) {
        q = p->next;
        delete p;
    }

    return 0;
}