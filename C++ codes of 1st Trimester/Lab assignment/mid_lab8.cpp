#include <bits/stdc++.h>

using namespace std;

int main() {

       int acc = 1;
       int fact = 1;
       int coun = 1;
       float e = 1.0;


       cout << "Enter desired accuracy of e: " << endl;
       cin >> acc;


     if (acc > 1)

        {

          while (coun <= (acc-1))

        {

          fact = fact * coun;
          e = e + (1/static_cast<double>(fact));

          coun = coun + 1;

        }

           cout << "e is " << e << endl;
        }


       return 0;
}
