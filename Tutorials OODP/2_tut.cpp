#include <iostream>
using namespace std;

inline double calculateSI(double p, double r, double t) {
    return (p * r * t) / 100;
}

int main() {
    double p, r, t;
    cout << "Enter Principal, Rate, and Time: ";
    cin >> p >> r >> t;
    cout << "Simple Interest: " << calculateSI(p, r, t) << endl;
    return 0;
}