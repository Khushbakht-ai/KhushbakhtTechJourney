#include<iostream>
using namespace std;

class Book {
public:
    string title;
    Book(string t) {
        title = t;
        cout << "Book created: " << title << endl;
    }
};

int main() {
    Book b1("C++ Mastery");
    return 0;
}
