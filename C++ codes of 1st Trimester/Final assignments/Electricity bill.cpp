#include <iostream>

using namespace std;

class Electricity
{
  public:
  double elec, cpu, cost;
  public:
  void get()
  {
      cout<<"Enter the total electricity used in units: ";
      cin>>elec;
      cout<<"Enter cost of electricity per unit: ";
      cin>>cpu;
  }
  public:
  double calc_bill()
  {
      cost = elec * cpu;
      return cost;
  }
  public:
  void put()
  {
      cout<<"Total bill of the customer is: "<< cost;
  }

};
int main()
{
    Electricity el;
    el.get();
    el.calc_bill();
    el.put();

    return 0;
}
