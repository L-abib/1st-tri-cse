#include <iostream>

using namespace std;
class largest
{
  public:
  double x, y;
  public:
  void info()
  {
      cout<<"Enter 1st number: ";
      cin>>x;
      cout<<"Enter 2nd number: ";
      cin>>y;
  }
  public:
  void decision()
  {
      if(x>y)
      {
          cout<<"1st number is the largest!";
      }
      else
      {
          cout<<"2nd number is the largest!";
      }
  }

};

int main()
{
    largest lg;
    lg.info();
    lg.decision();

    return 0;
}
