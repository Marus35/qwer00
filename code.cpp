#include <iostream>
#include "windows.h"
using namespace std;
bool isPalindrome(int num) {
    int first = num / 1000;
    int second = (num / 100) % 10;
    int third = (num / 10) % 10;
    int fourth = num % 10;
    return (first == fourth && second == third);
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int num;
    cout << "Введіть чотиризначне число: ";
    cin >> num;
    if (isPalindrome(num)) {
        cout << "Число є паліндромом" << endl;
    }
    else {
        cout << "Число не є паліндромом" << endl;
    }
    return 0;
}