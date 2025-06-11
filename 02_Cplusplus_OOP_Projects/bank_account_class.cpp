#include<iostream>
using namespace std;

class BankAccount {
public:
    string accountHolder;
    float balance;

    void deposit(float amount) {
        balance += amount;
    }

    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    acc.accountHolder = "Khushbakht";
    acc.balance = 1000;
    acc.deposit(500);
    acc.display();

    return 0;
}
