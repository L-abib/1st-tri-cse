#include <iostream>

using namespace std;

class Info1
{
  public:
  string name, dob;
  public:
  void input1()
  {
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter date of birth: ";
      cin>>dob;
  }
};

class Info2
{
  public:
  int sal, workh;
  void input2()
  {
      cout<<"Enter salary: ";
      cin>>sal;
      cout<<"Enter work hours per day: ";
      cin>>workh;
  }

};

class Info:public Info1, public Info2
{
  public:
  void info()
  {
      cout<<"\nEmployee's details:"<<endl;
      cout<<"Employee's name: "<<name<<endl;
      cout<<"Employee's date of birth: "<<dob<<endl;
      cout<<"Employee's salary: "<<sal<<endl;
      cout<<"Employee's work hours per day: "<<workh<<endl;
  }
};

int main()
{
   Info in;
   in.input1();
   in.input2();
   in.info();

    return 0;
}
