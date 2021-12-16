#include <iostream>

using namespace std;

class Employee
{
  public:
  string name, dob;
  int sal, workh;
  public:
  void input1()
  {
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter date of birth: ";
      cin>>dob;

  }
  public:
  void input2()
  {
      cout<<"Enter salary: ";
      cin>>sal;
      cout<<"Enter work hours per day: ";
      cin>>workh;
  }
};
class Info1:public Employee
{
  public:
  void info1()
  {

      cout<<"\nEmployee's details:"<<endl;
      cout<<"Employee's name: "<<name<<endl;
      cout<<"Employee's date of birth: "<<dob<<endl;
  }
};

class Info2:public Employee
{
  public:
  void info2()
  {

      cout<<"Employee's salary: "<<sal<<endl;
      cout<<"Employee's work hours per day: "<<workh<<endl;
  }
};

int main()
{
    Info1 in1;
    Info2 in2;
    in1.input1();
    in2.input2();
    in1.info1();
    in2.info2();

    return 0;
}
