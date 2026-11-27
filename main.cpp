#include <iostream>
#include <queue>
#include <cmath>

using namespace std;

int main() {
    queue<int> q;
    int nums[15] = {1, 4, 7, 9, 12, 16, 20, 25, 30, 36, 42, 49, 55, 64, 81};

    for (int i = 0; i < 15; i++) {
        q.push(nums[i]);
    }

    int countSquares = 0;
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        if (x >= 0) {
            int root = static_cast<int>(sqrt(x));
            if (root * root == x) {
                countSquares++;
            }
        }
    }

    cout << "Кількість елементів, що є квадратами цілих чисел: " << countSquares << endl;

    return 0;
}