#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cout << "Enter a number to covert to hour and minute:" << endl;
    cin >> x;
    y = x / 60;
    z = x % 60;
    cout << y << ":" << z;
    return 0;
}
