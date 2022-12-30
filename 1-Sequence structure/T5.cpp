#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    double d;
    cin >> x1 >> y1 >> x2 >> y2;
    d = hypot((x1 - x2), (y1 - y2));
    cout << fixed << setprecision(2) << d << endl;
    return 0;
}