//
// Created by 董道航 on 2022/12/2.
//
#include <iostream>

using namespace std;

struct mat {
    long long a, b, c, d;
};

mat multiply_mat(mat m1, mat m2) {
    mat r{};
    r.a = ((m1.a * m2.a) + (m1.b * m2.c)) % 1000000007;
    r.b = ((m1.a * m2.b) + (m1.b * m2.d)) % 1000000007;
    r.c = ((m1.c * m2.a) + (m1.d * m2.c)) % 1000000007;
    r.d = ((m1.c * m2.b) + (m1.d * m2.d)) % 1000000007;
    return r;
}

mat p(mat x, int n) {
    mat r{1, 0, 0, 1};
    while (n) {
        if (n % 2) {
            r = multiply_mat(r, x);
        }
        x = multiply_mat(x, x);
        n /= 2;
    }
    return r;
}

void print_mat(const mat &a) {
    cout << a.a << ' ' << a.b << endl << a.c << ' ' << a.d;
}

int main() {
    int n;
    cin >> n;
    mat m{}, r{};
    cin >> m.a >> m.b >> m.c >> m.d;
    m.a += (m.a < 0 ? 1000000007 : 0);
    m.b += (m.b < 0 ? 1000000007 : 0);
    m.c += (m.c < 0 ? 1000000007 : 0);
    m.d += (m.d < 0 ? 1000000007 : 0);
    r = p(m, n);
    print_mat(r);
    return 0;
}
