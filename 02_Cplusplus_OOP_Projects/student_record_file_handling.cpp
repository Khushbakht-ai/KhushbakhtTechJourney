#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream file("student.txt");
    file << "Name: Khushbakht\n";
    file << "Roll No: 101\n";
    file.close();

    ifstream readFile("student.txt");
    string line;
    while (getline(readFile, line)) {
        cout << line << endl;
    }

    return 0;
}
