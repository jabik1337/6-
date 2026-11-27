#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Employee {
    string surname;
    double salary;
};

int main() {
    queue<Employee> employees;

    employees.push({"Kovalenko", 24500});
    employees.push({"Bondar", 18000});
    employees.push({"Tkachenko", 32000});
    employees.push({"Shevchenko", 20000});
    employees.push({"Marchenko", 21500});

    cout << "Працівники із заробітною платою понад 20 000 грн:" << endl;
    while (!employees.empty()) {
        Employee emp = employees.front();
        employees.pop();
        if (emp.salary > 20000) {
            cout << emp.surname << " - " << emp.salary << " грн" << endl;
        }
    }

    return 0;
}