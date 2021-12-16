#include <iostream>

using namespace std;
class stdInfo
{
  public:
  string name, sec;
  double cgpa;
  int roll;
  void info()
  {
  cout<<"Enter name: ";
  cin>>name;
  cout<<"Enter section: ";
  cin>>sec;
  cout<<"Enter roll no: ";
  cin>>roll;
  cout<<"Enter CGPA: ";
  cin>>cgpa;
  }
};

class stdDisplay:public stdInfo
{
  public:
  void display()
  {
      cout<<"Student's information:"<<endl;
      cout<<"Student's name: "<<name<<endl;
      cout<<"Student's section: "<<sec<<endl;
      cout<<"Student's roll no: "<<roll<<endl;
      cout<<"Student's CGPA: "<<cgpa<<endl;
  }
};

int main()
{
    stdDisplay dis;
    dis.info();
    dis.display();

    return 0;
}


//Question: Write a C++ program to read and print studentÕs information using two classes and simple inheritance.
