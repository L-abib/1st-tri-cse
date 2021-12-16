#include <iostream>

using namespace std;
   float calculatecharges(int h)
   {
     float c=20;
     float x;
     if(h<=3)
        c=20;
        if(h>3);
        c += (h-3) * 5.50;
     if(c>1000)
        c=1000;
     return c;
   }
   int main()
   {

       int h1;
       cout<< "parking hours for 1st customer ";
       cin>> h1;
       float c1= calculatecharges(h1);



        int h2;
       cout<< "parking hours for 2nd customer ";
       cin>> h2;
       float c2= calculatecharges(h2);


         int h3;
       cout<< "parking hours for 3rd customer ";
       cin>> h3;
       float c3= calculatecharges(h3);


 cout << "1st \t\t2nd \t\t3rd" << endl;
 cout << c1 << "\t\t" << c2 <<"\t\t" << c3 << endl;

      float total= c1 + c2 + c3 ;
      cout<< "Yesterday's total charge "<<total<<endl;


    return 0;
}




