#include <iostream>
#include <cmath>
using namespace std;



int main()
{
   double a1, a2, b1, b2 , x, i;
   x= sqrt(-1);
   cout << "Enter 2 real number for 1st complex number"<<endl;
   cin>>a1>>b1;
   cout << "enter 2 real number for 2nd complex number"<<endl;
   cin>>a2>>b2;
   double sum1 = a1 + a2;
   double sum2 = b1 + b2;
   double diff1 = a1 - a2;
   double diff2 = b1 - b2;
   double pro1 = a1 * a2;
   double pro2 = a1 * b2;
   double pro3 = b1 * a1;
   double pro4 = b1 * b2;
   double pro5 = pro1 - pro4;
   double pro6 = pro2 + pro3;
   cout << "sum is: " << sum1 << " + " << "(" << sum2 << "i)" << endl;;
   cout << "difference is: " << diff1 << " - " << "(" << diff2 << "i)" << endl;
   cout << "product is: " << pro5 << " + " << "(" << pro6 << "i)" << endl;


    return 0;
}
