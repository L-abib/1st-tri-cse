#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int y = 7;


    {
        {
            cout << "The sum is:" << "\n" << endl;
        }
        cout << x << "+" << y << "=" << x + y << endl;

    }


    return 0;
}
