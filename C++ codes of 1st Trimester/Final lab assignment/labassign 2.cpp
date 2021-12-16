#include <iostream>

using namespace std;

class Employee
{
public:
    string name1, name2, name3, add1, add2, add3;
    int yoj1, yoj2, yoj3, sal1, sal2, sal3;

    void display()
    {
        cout << "Name" << "\t" << "Year of joining" << "\t\t" << "Address" << "\t\t"<< "Salary"<< endl;
        cout << name1 << "\t" << yoj1 << "\t\t" << add1 << "\t"<< sal1 << endl;
        cout << name2 << "\t" << yoj2 << "\t\t" << add2 << "\t"<< sal2 << endl;
        cout << name3 << "\t" << yoj3 << "\t\t" << add3 << "\t"<< sal3 << endl;

    }
};

int main()
{
    Employee em;
    em.name1 = "Robert";
    em.name2 = "Sam";
    em.name3 = "John";
    em.yoj1 = 1994;
    em.yoj2 = 2000;
    em.yoj3 = 1999;
    em.add1 = "64C- WallsStreat";
    em.add2 = "68D- WallsStreat";
    em.add3 = "26B- WallsStreat";
    em.sal1 = 15000;
    em.sal2 = 10000;
    em.sal3 = 12000;
    em.display();

    return 0;
}
