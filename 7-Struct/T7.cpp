//
// Created by ddh on 2022/12/5.
//
#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

// 头插法，思路参见：https://blog.csdn.net/weixin_45905158/article/details/111401422
ListNode *reverseList(ListNode *head) {
    /********* Begin *************/
    ListNode *temp1 = head, *temp2 = NULL, *temp3;
    while (temp1) {
        temp3 = temp1->next;
        temp1->next = temp2;
        temp2 = temp1;
        temp1 = temp3;
    }
    return temp2;
    /********* End *************/
}



ListNode* createList() {
    int x;
    ListNode head;
    ListNode* p = &head; head.next = NULL;
    while (cin >> x) {
        p->next = new ListNode; p->next->val = x; p->next->next = NULL;
        p = p->next;
    }
    return head.next;
}

void disp(ListNode* p) {
    while (p)
    {
        cout<<p->val<<" -> ";
        p = p->next;
    }
    cout<<"nullptr\n";
}

int main()
{
    ListNode* L1 = createList(); disp(L1);
    ListNode* L2 = reverseList(L1); disp(L2);

    return 0;
}
