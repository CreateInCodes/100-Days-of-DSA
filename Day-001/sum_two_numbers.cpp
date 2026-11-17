#include <iostream>

int main() {
    int firstNumber, secondNumber;

    std::cout << "Enter two integers: ";
    std::cin >> firstNumber >> secondNumber;

    const int sum = firstNumber + secondNumber;
    std::cout << "Sum = " << sum << '\n';

    return 0;
}
