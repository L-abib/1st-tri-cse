#include <iostream>

using namespace std;

class Area
{
  public:
  double length, breadth, area;
  Area()
  {
    cout<<"Enter the length: ";
    cin>>length;
    cout<<"Enter the breadth: ";
    cin>>breadth;

  }
  public:
  void calculation()
  {
    area = length * breadth;
  }
  public:
  double returnArea()
  {
    return area;
  }
};

int main()
{
    Area ar;
    ar.calculation();
    cout<<"Area of the rectangle is: "<<ar.returnArea();

    return 0;
}
