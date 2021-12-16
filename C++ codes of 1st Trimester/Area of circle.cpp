#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float Pi = M_PI;
    float r = 5;


    {
        {
            cout << "Area of the circle is:" << "\n" << "Pi * r * r = area" << "\n";
        }
        cout << Pi << "*" << r << "*" << r << "=" << Pi * r * r << endl;

    }
    return 0;
}
