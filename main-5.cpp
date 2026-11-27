#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct ScanTask {
    string docName;
    int pages;
};

int main() {
    queue<ScanTask> scannerQueue;

    scannerQueue.push({"Report.pdf", 4});
    scannerQueue.push({"Contract.docx", 2});
    scannerQueue.push({"Invoice.png", 1});

    int totalScannedPages = 0;

    while (!scannerQueue.empty()) {
        ScanTask task = scannerQueue.front();
        scannerQueue.pop();
        cout << "Сканування: " << task.docName << " (" << task.pages << " стор.)" << endl;
        totalScannedPages += task.pages;
    }

    cout << "Загальна кількість відсканованих сторінок: " << totalScannedPages << endl;

    return 0;
}