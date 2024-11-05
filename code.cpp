#include <iostream>
#include "windows.h"
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "Введіть чотиризначне число: ";
    cin >> num;
    int first = num / 1000;
    int second = (num / 100) % 10;
    int third = (num / 10) % 10;
    int fourth = num % 10;
    (first == fourth && second == third) ? cout << "True" << endl : cout << "False" << endl;
}