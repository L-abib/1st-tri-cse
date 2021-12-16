#include <iostream>

using namespace std;
class name
{
  public:
  name()
  {
  cout << "Name: Jon Snow"<<endl;
  }
};

class father
{
  public:
  father()
  {
  cout << "Father's name: Aegon Targaryen" <<endl;
  }

};
class details: public name, public father
{
  public:
   details()
   {
   cout << "Show: Game of Thrones";
   }
};

int main()
{
    details d;


    return 0;
}


//Question: Write a C++ Program to demonstrate an Example of Multiple Inheritance.
