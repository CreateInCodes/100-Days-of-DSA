#include <iostream>

int main() {
    const double pi = 3.141;
    double radius;

    std::cout << "Enter the radius: ";
    std::cin >> radius;

    if (radius < 0) {
        std::cout << "Radius cannot be negative.\n";
        return 1;
    }

    const double area = pi * radius * radius;
    std::cout << "Area = " << area << '\n';

    return 0;
}
