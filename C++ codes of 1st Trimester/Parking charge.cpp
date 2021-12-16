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


//Question: A parking garage charges a BDT 20.00 minimum fee to park for up to three hours. The garage charges an additional BDT 5.50 per hour for each hour in excess of three hours. The maximum charge for any given 24-hour period is BDT 1000.00. Assume that no car parks for longer than 24 hours at a time. Write a program that calculates and prints the parking charges for each of three customers who parked their cars in this garage yesterday. You should enter the hours parked for each customer. Your program should print the results in a tabular format and should calculate and print the total of yesterdayÕs receipts. The program should use the function "calculateCharges" to determine the charge for each customer.


