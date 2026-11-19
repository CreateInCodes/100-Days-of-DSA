#include <iostream>
using namespace std;

int main() {
    float radius;

    cout << "radius of circle: ";
    cin >> radius;
    cout << endl;

    float area = 3.14 * radius * radius;

    cout << "area of circle is: ";
    cout << area << endl;

    return 0;
}
