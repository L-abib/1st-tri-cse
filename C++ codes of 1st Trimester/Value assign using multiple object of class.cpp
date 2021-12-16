#include <iostream>

using namespace std;

class student
{
public:
    int roll, phn;
    string add;

};

int main()
{
    student Sam;
    Sam.roll = 2;
    Sam.phn = 1712345677;
    Sam.add = "Baker street";

    student John;
    John.roll = 5;
    John.phn = 1412345677;
    John.add = "Asgard";

    cout << " Sam's roll number: " << Sam.roll << ", phone number: " << Sam.phn << " and address: " << Sam.add;
    cout << "\n John's roll number:" << John.roll << ", phone number: " << John.phn << " and address: " << John.add << endl;

    return 0;
}


//Question: Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.
