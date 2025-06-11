#include<iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Area of circle = πr^2" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of rectangle = l * b" << endl;
    }
};

int main() {
    Shape* shape;
    Circle c;
    Rectangle r;

    shape = &c;
    shape->area();

    shape = &r;
    shape->area();

    return 0;
}
