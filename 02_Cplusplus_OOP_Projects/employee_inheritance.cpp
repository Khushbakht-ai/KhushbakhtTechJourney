#include<iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;

    void display() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    void showDetails() {
        display();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.name = "Khushbakht";
    m.id = 101;
    m.department = "IT";
    m.showDetails();

    return 0;
}
