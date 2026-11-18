#include <iostream>
using namespace std;
int main() {
    int firstNumber, secondNumber;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    const int sum = firstNumber + secondNumber;
    cout << "Sum = " << sum << '\n';

    return 0;
}
