#include <iostream>

using namespace std;

class Employee
{
    public:
    void getInfo(double sal, double noh)
    {
        cout<<"Main salary is: "<<sal<<endl;
        cout<<"Number of hours of work per day: "<<noh<<endl;
    }
    public:
    double AddSal(double sal)
    {
          if(sal<500)
          {
              sal=sal+10;
          }
          else
          {
              sal=sal;
          }
          return sal;
    }
    double AddWork(double noh)
    {
        int bonus;
        if(noh<=6)
        {
            bonus=0;
        }
        else
        {
            bonus=5;
        }
        return bonus;
    }
};

int main()
{
    Employee em;
    em.getInfo(499,8);
    cout<<"Final salary of the Emplopee is: "<<em.AddSal(499)+em.AddWork(8);

    return 0;
}
