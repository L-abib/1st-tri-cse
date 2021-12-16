#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 8;


    {
        {
            cout << "Multiplied value is:" << "\n" << endl;
        }
        cout << x << "*" << y << "=" << x * y << endl;

    }
    return 0;
}
