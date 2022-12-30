//第3关：排序
//本关任务：输入三个整数，a，b，c（均在 int 范围内），要求将这三个数从大到小排序输出。
//根据提示，在右侧编辑器补充代码，输入三个整数 a，b，c，使用一个空格分隔。输出三个从大到小排序后的整数，以空格分隔
//测试输入：73 114 5
//预期输出：114 73 5
#include "iostream"

using namespace std;

void swap(int *p1, int *p2)                         //交换数组中的两元素
{
    int temp = *p1;                                 //创建变量储存元素p1的指针
    *p1 = *p2;                                      //将元素p1的指针改为元素p2的指针
    *p2 = temp;                                     //将元素p2的指针改为之前存储的元素p1的指针
}

void sort(int a, int b, int c) {
    int nums[3] = {a, b, c};
    int max = nums[0], min = nums[2];
    for (int i = 0; i < 3; ++i) {
        if (nums[i] > max) swap(&nums[0], &nums[i]);
        if (nums[i] < min) swap(&nums[2], &nums[i]);
    }
    cout << nums[0] << ' ' << nums[1] << ' ' << nums[2];
}

void sort1(int a, int b, int c) {
    if (a >= b && a >= c) {
        cout << a << ' ';
        if (b >= c) cout << b << ' ' << c;
        if (b < c) cout << c << ' ' << b;
    }
    else if (b >= a && b >= c) {
        cout << b << ' ';
        if (a >= c) cout << a << ' ' << c;
        if (a < c) cout << c << ' ' << a;
    }
    else if (c >= b && c >= a) {
        cout << c << ' ';
        if (a >= b) cout << a << ' ' << b;
        if (a < b) cout << b << ' ' << a;
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    sort1(a, b, c);
}