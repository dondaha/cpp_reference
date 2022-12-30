#include <iostream>

using namespace std;

int main() {
    int n, h, m, s;
    cin >> n;
    s = n % 60;
    m = n / 60 % 60;
    h = n / 60 / 60;
    cout << h << "小时" << m << "分" << s << "秒";
    return 0;
}