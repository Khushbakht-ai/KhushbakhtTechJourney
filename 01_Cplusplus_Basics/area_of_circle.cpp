#include<iostream>
using namespace std;

int main() {
    float radius;
    cout << "Enter radius: ";
    cin >> radius;

    float area = 3.1416 * radius * radius;
    cout << "Area of circle: " << area << endl;

    return 0;
}
