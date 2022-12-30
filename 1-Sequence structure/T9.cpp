#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    double price = n * 0.6;
    int yuan = int(price) + 0.5;
    int jiao = (price - yuan) * 10 + 0.5;
    cout << yuan << " " << jiao;
}