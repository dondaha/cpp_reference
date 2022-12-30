//
// Created by ddh on 2022/11/21.
//
#include <iostream>
#include "cstring"
using namespace std;

int main()
{
    char **s;
    s=new char *[10];
    char *x,*seq;
    x=new char [101];
    seq=new char [11];
    int a,b,l=0,word=0;
    a=b=0;
    cin.getline(x,100);
    cin.getline(seq,10);
    for (int i = 0; i < 101; ++i) {
        ++l;
        if (x[i]==' '||x[i]=='\0'){
            s[word]=new char [l];
            a=i-l+1;
            for (int j = 0; j < l-1; ++j) {
                s[word][j]=x[a+j];
            }
            s[word][l-1]='\0';
            ++word;
            l=0;
            if (x[i]=='\0') break;
        }
    }
    cout<<word<<'\n';
    for (int i = 0; seq[i]!='\0'; ++i) {
        if (i>0) cout<<' ';
        for (int j = 0; s[seq[i]-'0'][j]!='\0' ; ++j) {
            cout<<s[seq[i]-'0'][j];
        }
    }
    return 0;
}