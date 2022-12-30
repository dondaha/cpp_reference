#include <iostream>
using  namespace std;
int main()
{
    int a, b;
    int jiafa, chengfa, chufa, qiuyu;
    cin >> a >> b;
    //输入你的代码
    jiafa = a + b;
    chengfa = a * b;
    chufa = a / b;
    qiuyu = a % b;
    printf("%d+%d=%d\n", a, b, jiafa);
    printf("%d*%d=%d\n", a, b, chengfa);
    printf("%d/%d=%d\n", a, b, chufa);
    printf("%d%%%d=%d\n", a, b, qiuyu);
    return 0;
}