#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int r;
    cin >> r;
    double pi = 3.14;
    cout << "半径为" << r << "的球体积为" << fixed << setprecision(1) << 4.0 / 3.0 * pi * r * r * r << endl;
    cout << "半径为" << r << "的球体表面积为" << fixed << setprecision(1) << 4.0 * pi * r * r << endl;
    return 0;
}