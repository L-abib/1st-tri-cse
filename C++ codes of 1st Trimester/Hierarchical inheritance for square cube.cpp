#include <iostream>

using namespace std;
class Input
{
    public:
    double a;
    void number()
    {
        cout<<"Enter the number: ";
        cin>>a;
    }
};

class Square:public Input
{
  public:
  void square()
  {
      double sqr=a*a;
      cout<<"Square of the number is: "<<sqr<<endl;
  }
};

class Cube:public Input
{

  public:
  void cube()
  {
      double cube=a*a*a;
      cout<<"Cube of the number is: "<<cube<<endl;
  }
};
int main()
{
    Square sq;
    sq.number();
    sq.square();
    Cube cb;
    cb.number();
    cb.cube();

    return 0;
}

