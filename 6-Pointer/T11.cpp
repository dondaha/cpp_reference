// 用到了类
#include <iostream>
#include <cstring>
using namespace std;
class LongFloat{
public:
    LongFloat(const char * num){
        int dot_pos=0;
        while (num[dot_pos]!='.'&&num[dot_pos]!='\0'){
            ++dot_pos;
        }
        strncpy(p_int,num,dot_pos);
        p_int[dot_pos]='\0';
        strcpy(p_dec,num+dot_pos+1);
        while (strlen(p_int)!=0&&p_int[0]=='0'){
            for (int i = 0; i < strlen(p_int); ++i) {
                p_int[i]=p_int[i+1];
            }
        }
        while (strlen(p_dec)!=0&&p_dec[strlen(p_dec)-1]=='0'){
            p_dec[strlen(p_dec)-1]='\0';
        }
    }
    LongFloat(const LongFloat & a){
        for (int i = 0; i < 128; ++i) {
            p_int[i]=a.p_int[i];
            p_dec[i]=a.p_dec[i];
        }
    }
    void show(){
        cout<<p_int<<'.'<<p_dec<<endl;
    }
    char p_dec[128];
    char p_int[128];
};
LongFloat add(const LongFloat &a,const LongFloat &b){
    LongFloat r(".");
    char ri[128],rd[128];
    memset(ri,'0', sizeof(ri));
    memset(rd,'0', sizeof(rd));
    int lai= strlen(a.p_int),lbi= strlen(b.p_int);
    int lad= strlen(a.p_dec),lbd= strlen(b.p_dec);
    // 整数部分相加，结果保存到ri
    for (int i = 0; i < 128; ++i) {
        if (lai-i-1>=0){
            ri[i]=ri[i]+a.p_int[lai-i-1]-'0';
        }
        if (lbi-i-1>=0){
            ri[i]=ri[i]+b.p_int[lbi-i-1]-'0';
        }
        if (ri[i]-'0'>=10){
            ri[i]-=10;
            ri[i+1]+=1;
        }
    }
    for (int i = 127; i >= 0; --i) {
        if (ri[i]=='0'){
            ri[i]='\0';
        } else{
            break;
        }
    }
    int lri = strlen(ri);
    for (int i = 0; i < lri/2; ++i) {
        char temp = ri[i];
        ri[i]=ri[lri-i-1];
        ri[lri-i-1]=temp;
    }
    strcpy(r.p_int,ri);
    // 小数部分相加，结果保存到rd
    int ld_max=lad>lbd?lad:lbd;
    for (int i = ld_max-1; i >= 0; --i) {
        if (i<=lad-1){
            rd[i+1]=rd[i+1]+a.p_dec[i]-'0';
        }
        if (i<=lbd-1){
            rd[i+1]=rd[i+1]+b.p_dec[i]-'0';
        }
        if (rd[i+1]-'0'>=10){
            rd[i]+=1;
            rd[i+1]-=10;
        }
    }
    for (int i = 127; i >= 0; --i) {
        if (rd[i]=='0'){
            rd[i]='\0';
        } else{
            break;
        }
    }
    strcpy(r.p_dec,rd+1);
    if (rd[0]=='1'){
        r = add(r,LongFloat("1."));
    }
    return r;
}

void add_float(char* a, char* b, char* res) {
    LongFloat La(a),Lb(b);
    LongFloat r(add(La,Lb));
    strcpy(res,r.p_int);
    strcat(res,".");
    strcat(res,r.p_dec);
}

int main()
{
    char num1[128], num2[128], res[128];
    cin >> num1;
    cin >> num2;
    add_float(num1, num2, res);
    cout << res << endl;
    return 0;
}
