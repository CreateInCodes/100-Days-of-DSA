#include <iostream>
using namespace std;
int main() {
    const double pi = 3.141;
    double radius;

    cout << "Enter the radius: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Radius cannot be negative.\n";
        return 1;
    }

    const double area = pi * radius * radius;
    cout << "Area = " << area << '\n';

    return 0;
}
