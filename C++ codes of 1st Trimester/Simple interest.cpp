#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float P = 4000;
    float T = 2;
    float R = 5.5;
    float I;

    {
        cout << "Value of the simple interest is:" << "\n";
        cout << "P*T*R/100 = I" << "\n";
        {
            cout << P << "*" << T << "*" << R << "/" << 100 << "=" << P*T*R/100 << endl;
        }

    }

    return 0;
}


//Question: Write a program to calculate simple interest for a given P=4000, T=2, R=5.5. (I = P*T*R/100)
