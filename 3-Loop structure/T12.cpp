// ʹ���˰���ɸ
#include <iostream>

using namespace std;
constexpr int MAX = 1e8;
int numbers[MAX], flag[MAX] = {2};//flag��1Ϊ������2Ϊ����
int main() {
    int m, n, num = 0;
    cin >> m >> n;
    int len = n;
    for (int i = 0; i < len; ++i) {
        numbers[i] = i + 1;
    }
    for (int i = 0; i < len; ++i) {
        while (flag[i] != 0) ++i;
        flag[i] = 1;
        if (i == len) break;
        for (int j = i + 1; j <= len; ++j) {
            if (numbers[j] % numbers[i] == 0) flag[j] = 2;
        }
    }
    for (int i = m; i <= n; ++i) {
        if (flag[i - 1] == 1) ++num;
    }
    cout << num;
    return 0;
}