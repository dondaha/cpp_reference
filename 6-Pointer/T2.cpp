//
// Created by ddh on 2022/11/25.
//
#include <iostream>
using namespace std;

struct y{
    int n;
    y *next;
};

int Num(y *a){
    int first = a->n;
    y *temp=a->next;
    int sum=1;
    while (temp->n!=first){
        temp = temp->next;
        ++sum;
    }
    return sum;
}
// 输入要删除的元素前面的一个元素的地址
void del(y *before){
    y *p;
    p=before->next;
    before->next=before->next->next;
    delete p;
}

int main()
{
    int n,i;
    cin>>n;
    y *head,*temp;
    head = new y;
    head->n=1;
    temp=head;
    for (int i = 2; i <= n; ++i) {
        temp->next=new y;
        temp=temp->next;
        temp->n=i;
    }
    temp->next=head;
    temp=head;
    while (Num(temp)>1){
        i=temp->n;
        del(temp->next);
        temp=temp->next->next;
    }
    cout<<temp->n;
    return 0;
}