#include <iostream>
using namespace std;

class AccountB; 

class AccountA {
    double balance;
public:
    AccountA(double b) : balance(b) {}
    friend void transfer(AccountA &a, AccountB &b, double amt);
    void show() { cout << "Account A Balance: " << balance << endl; }
};

class AccountB {
    double balance;
public:
    AccountB(double b) : balance(b) {}
    friend void transfer(AccountA &a, AccountB &b, double amt);
    void show() { cout << "Account B Balance: " << balance << endl; }
};

void transfer(AccountA &a, AccountB &b, double amt) {
    if (a.balance >= amt) {
        a.balance -= amt;
        b.balance += amt;
        cout << "Transfer Successful!" << endl;
    } else {
        cout << "Insufficient funds in Account A." << endl;
    }
}

int main() {
    AccountA acc1(1000);
    AccountB acc2(500);
    transfer(acc1, acc2, 300);
    acc1.show();
    acc2.show();
    return 0;
}