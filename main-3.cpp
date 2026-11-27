#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<char> chars;
    string text = "xyx yyx x y";

    for (size_t i = 0; i < text.length(); i++) {
        chars.push(text[i]);
    }

    int countX = 0;
    int countY = 0;

    while (!chars.empty()) {
        char c = chars.front();
        chars.pop();
        if (c == 'x') {
            countX++;
        } else if (c == 'y') {
            countY++;
        }
    }

    if (countX == countY) {
        cout << "Кількість символів 'x' та 'y' однакова (" << countX << ")." << endl;
    } else {
        cout << "Кількість символів 'x' та 'y' різна ('x': " << countX << ", 'y': " << countY << ")." << endl;
    }

    return 0;
}