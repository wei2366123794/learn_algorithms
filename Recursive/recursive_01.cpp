// 给定一个正整数 n，请用递归方法求出从 1 到 n 的所有整数中，数字 7 出现的总次数。
#include <iostream>


void count7(int i, int& count) {
    if (i < 7) return;

    if (i % 10 == 7) {
        count++;
    }

    count7(--i, count);
}


int main() {
    int count = 0;

    count7(30, count);

    std::cout << count;
}
