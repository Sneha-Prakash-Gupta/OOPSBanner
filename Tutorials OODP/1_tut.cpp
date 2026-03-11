#include <iostream>
using namespace std;

inline void calculateBill(double amount) {
    double discount = (amount > 5000) ? (amount * 0.10) : 0;
    cout << "Original Bill: " << amount << endl;
    cout << "Discount: " << discount << endl;
    cout << "Final Amount: " << (amount - discount) << endl;
}

int main() {
    double bill;
    cout << "Enter bill amount: ";
    cin >> bill;
    calculateBill(bill);
    return 0;
}