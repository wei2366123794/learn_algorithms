// 最优装载问题
// 海盗截获了一艘货船，里面有很多价值不菲的宝物，海盗想尽可能的装更多的宝物
// 但是海盗船的容量c是有限的，每件宝物的容量为w[i], 怎么样能够装最多的宝物

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int getMax(int c, vector<int> bw);

int main() {

    // cout << "hello";
    vector<int> bw = { 5, 3, 7, 9, 1, 10 };

    int max = getMax(20, bw);

    cout << max << endl;
}


int getMax(int c, vector<int> bw) {
    int len = bw.size();

    sort(bw.begin(), bw.end());
    int sum = 0;

    for (int i = 0; i < bw.size(); i++) {
        // cout << bw[i] << " ";
        sum += bw[i];
        if (sum > c) {
            return i;
        }

    }

    return 0;
}