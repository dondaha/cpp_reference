#include <iostream>
#include <iomanip>
using  namespace std;
int main()
{
    //输入你的代码
    float a, b, c, d, result;
    cin >> a >> b >> c >> d;
    result = (a + b + c + d) / 4;
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
