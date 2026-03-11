#include <iostream>
using namespace std;

class ExternalMarks; 

class InternalMarks {
    int marks;
public:
    InternalMarks(int m) : marks(m) {}
    friend void showTotal(InternalMarks i, ExternalMarks e);
};

class ExternalMarks {
    int marks;
public:
    ExternalMarks(int m) : marks(m) {}
    friend void showTotal(InternalMarks i, ExternalMarks e);
};

void showTotal(InternalMarks i, ExternalMarks e) {
    cout << "Total Marks: " << (i.marks + e.marks) << endl;
}

int main() {
    InternalMarks in(25);
    ExternalMarks ex(65);
    showTotal(in, ex);
    return 0;
}