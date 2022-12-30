#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else {
            cout << "false";
            return 0;
        }
    }
    cout << "true";
    return 0;
}
