//
// Created by ddh on 2022/12/6.
//
#include <iostream>
#include "cstring"
using namespace std;
#define NAMEMAX 51
#define IDMAX 13
struct data {
    char sid[IDMAX];
    char name[NAMEMAX];
    int score1, score2, score3;
};
data database[1000];
int n = 0;

void printInfoBySidUp(data dataList[], int l);

// 输入data结构体，打印其各个数据
void print_info(data s){
    cout<<s.sid<<' '<<s.name<<' '<<s.score1<<' '<<s.score2<<' '<<s.score3<<' '<<endl;
}

//依次输入学号、三门课程的分数、姓名，返回结构体
data get_input(){
    char name[NAMEMAX];
    char sid[IDMAX];
    int s1,s2,s3;
    cin>>sid>>s1>>s2>>s3;
    cin.get();
    cin.getline(name,50);
    data r;
    for (int i = 0; i < strlen(sid); ++i) {
        r.sid[i]=sid[i];
    }
    r.sid[strlen(sid)]='\0';
    for (int i = 0; i < strlen(name); ++i) {
        r.name[i]=name[i];
    }
    r.name[strlen(name)]='\0';
    r.score1=s1;r.score2=s2;r.score3=s3;
    return r;
}
// 输入一个学号字符串数组，判断是否存在重复，重复则返回位置，否则返回-1
int isExist(char sid[]){
    int position=-1;
    for (int i = 0; i < n; ++i) {
        if (strcmp(database[i].sid,sid)==0){
            position=i;
            break;
        }
    }
    return position;
}
// 输入一个学生信息的结构体，将其添加到database全局结构体数组中
void add_info(data new_s){
    int temp=isExist(new_s.sid);
    if (temp==-1) {
        database[n] = new_s;
        ++n;
    } else{
        // 试图添加重复学生：以新添加的学生更新
        database[temp]=new_s;
    }
}

// 输入信息结构体,修改学生信息
void change_info(data info){
    int temp= isExist(info.sid);
    if (temp!=-1){
        database[temp]=info;
    }
}

// 按学号删除学生（输入学号）
void deleteBySid(){
    // 先获得学号
    char sid[IDMAX];
    cin>>sid;
    int temp= isExist(sid);
    if (temp!=-1){
        for (int i = temp; i < n-1; ++i) {
            database[i]=database[i+1];
        }
        --n;
    }
    // 试图删除不存在的学生：不做任何修改
}

// 按学号查询学生信息（输入学号，输出学号、姓名、三门课程的分数）
void searchBySid(){
    // 先获得学号
    char sid[IDMAX];
    cin>>sid;
    int temp= isExist(sid);
    // 查找不存在的学号：不输出任何信息
    if (temp!=-1){
        print_info(database[temp]);
    }
}

// 按姓名查询学生信息（输入姓名，按学号升序依次输出学生信息）
void searchByName(){
    char name[NAMEMAX];
    cin.getline(name,NAMEMAX-1);
    data match_data[1000];
    int match_n=0;
    for (int i=0;i<n;++i){
        if (strcmp(name,database[i].name)==0){
            match_data[match_n]=database[i];
            ++match_n;
        }
    }
    printInfoBySidUp(match_data, match_n);
}

// 输入data数组与数组长度，按学号升序排序并输出
void printInfoBySidUp(data dataList[], int l){
    data temp;
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < l-i-1; ++j) {
            if (strcmp(dataList[j].sid,dataList[j+1].sid)>0){
                temp=dataList[j];
                dataList[j]=dataList[j+1];
                dataList[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < l; ++i) {
        print_info(dataList[i]);
    }
}

// 输入data数组与数组长度，按总分降序排序并输出
void printInfoByScoreDown(data dataList[],int l){
    data temp;
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < l-1-i; ++j) {
            int score_sum1=dataList[j].score1+dataList[j].score2+dataList[j].score3;
            int score_sum2=dataList[j+1].score1+dataList[j+1].score2+dataList[j+1].score3;
            if (score_sum1<score_sum2||(score_sum1==score_sum2&&strcmp(dataList[j].sid,dataList[j+1].sid)>0)){
                temp=database[j];
                database[j]=database[j+1];
                database[j+1]=temp;
            }
        }
    }
    for (int i = 0; i < l; ++i) {
        print_info(dataList[i]);
    }
}
int main()
{
    int option;
    cin>>option;
    while (option!=0){
        switch (option) {
            case 1:
                add_info(get_input());
                break;
            case 2:
                change_info(get_input());
                break;
            case 3:
                deleteBySid();
                break;
            case 4:
                searchBySid();
                break;
            case 5:
                searchByName();
                break;
            case 6:
                printInfoBySidUp(database,n);
                break;
            case 7:
                printInfoByScoreDown(database,n);
                break;
            case 0:
                break;
        }
        cin>>option;
        cin.get();
    }
    return 0;
}
