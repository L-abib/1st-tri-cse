#include <iostream>
#include<cmath>
using namespace std;

class area
{
  public:
  double shape(double tri1, double tri2, double tri3)
  {

    double tarea = (tri1 + tri2 + tri3)/2;
    tarea = sqrt(tarea*(tarea-tri1)*(tarea-tri2)*(tarea-tri3));
    return tarea;
  }
  double shape(double req1, double req2)
  {
    int rarea = req1 * req2;
    return rarea;
  }
  double shape(double cir1)
  {
      double carea = 3.1416 * cir1 * cir1;
      return carea;
  }
};


int main()
{
    area ar;
    cout << "Area of triangle = " ;
    cout << ar.shape(2,3,4) << endl;
    cout << "Area of reqtangle = " ;
    cout << ar.shape(2,3) << endl;
    cout << "Area of circle = ";
    cout << ar.shape(5) << endl;

    return 0;
}


//Question: Write a C++ Program to Find Area of Shapes using Function Overloading.
