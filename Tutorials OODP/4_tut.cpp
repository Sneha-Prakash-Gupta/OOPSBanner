#include <iostream>
using namespace std;

inline int checkResult(int s1, int s2, int s3) {
    if (s1 >= 40 && s2 >= 40 && s3 >= 40) {
        return s1 + s2 + s3;
    }
    return -1; // Indicates failure
}

int main() {
    int m1, m2, m3;
    cout << "Enter marks for 3 subjects: ";
    cin >> m1 >> m2 >> m3;
    
    int total = checkResult(m1, m2, m3);
    if (total != -1)
        cout << "Student Passed! Total: " << total << endl;
    else
        cout << "Student Failed (scored below 40 in one or more subjects)." << endl;
    return 0;
