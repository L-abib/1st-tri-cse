#include <iostream>

using namespace std;
class number
{
  public:
  int a, b;
  void input()
  {
  cout<<"Enter 1st number: ";
  cin>>a;
  cout<<"Enter 2nd number: ";
  cin>>b;
  }
};

class Sum:public number
{
  public:
  void sum()
  {
      cout<<"Sum is: "<<a+b<<endl;
  }
};

class Diff:public Sum
{
  public:
  void diff()
  {
      cout<<"Difference is: "<<a-b<<endl;
  }
};

int main()
{
    Diff df;
    df.input();
    df.sum();
    df.diff();

    return 0;
}
