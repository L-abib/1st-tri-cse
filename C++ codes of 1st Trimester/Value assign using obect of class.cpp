#include <iostream>

using namespace std;

class student
{
    public:
        string name;
        int roll_no;


};

int main()
{
    student sd;
    sd.name = "John";
    sd.roll_no = 2;
    cout << "Student name: " << sd.name;
    cout << "\nstudent roll: " << sd.roll_no << endl;


    return 0;
}


//Question: Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.
