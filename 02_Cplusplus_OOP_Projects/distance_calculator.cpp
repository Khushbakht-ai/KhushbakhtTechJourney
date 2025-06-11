#include<iostream>
#include<cmath>
using namespace std;

class Point;

class Distance {
public:
    static float calculate(Point, Point);
};

class Point {
    float x, y;
public:
    Point(float a, float b) {
        x = a; y = b;
    }
    friend float Distance::calculate(Point, Point);
};

float Distance::calculate(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point p1(2, 3), p2(5, 7);
    cout << "Distance: " << Distance::calculate(p1, p2) << endl;
    return 0;
}
