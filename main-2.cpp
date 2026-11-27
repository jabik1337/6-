#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> source;
    queue<int> filtered;

    for (int i = 1; i <= 150; i++) {
        source.push(i);
    }

    while (!source.empty()) {
        int x = source.front();
        source.pop();
        if (x % 7 == 2) {
            filtered.push(x);
        }
    }

    cout << "Числа від 1 до 150, які при діленні на 7 дають остачу 2: ";
    while (!filtered.empty()) {
        cout << filtered.front() << " ";
        filtered.pop();
    }
    cout << endl;

    return 0;
}