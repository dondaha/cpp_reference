//
// Created by 董道航 on 2022/12/5.
//
#include<iostream>
using namespace std;

struct Node {
    int order, coeff;
    Node *nxt;
};

int max(int a, int b) {
    return a > b ? a : b;
}

Node *add_poly(Node *a, Node *b) {
    int n = max(a->order, b->order);
    int ct;
    Node *r = new Node{0, 0, NULL};
    Node *temp = r, *temp1;

    while (n >= 0) {
        ct = 0;
        if (a!=NULL&&a->order == n) {
            ct += a->coeff;
            a = a->nxt;
        }
        if (b!=NULL&&b->order == n) {
            ct += b->coeff;
            b = b->nxt;
        }
        if (ct != 0) {
            temp->order = n;
            temp->coeff = ct;
            temp->nxt = new Node;
            temp1 = temp;
            temp = temp->nxt;
            temp->nxt = NULL;
        }
        --n;
    }
    if (r->coeff==0){
        return r;
    } else{
        delete temp;
        temp1->nxt = NULL;
        return r;
    }
}

int main()
{
    Node *a = nullptr, *pa = nullptr, *b = nullptr, *pb = nullptr;
    int coef, orde;
    cin >> coef >> orde;
    while (orde >= 0) {
        Node* na = new Node;
        na->order = orde;
        na->coeff = coef;
        na->nxt = nullptr;
        if (pa) pa->nxt = na;
        pa = na;
        if (a == nullptr) a = pa;
        cin >> coef >> orde;
    }
    cin >> coef >> orde;
    while (orde >= 0) {
        Node* nb = new Node;
        nb->order = orde;
        nb->coeff = coef;
        nb->nxt = nullptr;
        if (pb)  pb->nxt = nb;
        pb = nb;
        if (b == nullptr) b = pb;
        cin >> coef >> orde;
    }

    Node* c = add_poly(a, b);

    while (c) {
        cout << c->coeff << ' '<< c->order << endl;
        c = c->nxt;
    }
    return 0;
}