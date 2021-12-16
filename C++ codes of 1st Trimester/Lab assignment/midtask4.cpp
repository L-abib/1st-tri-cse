#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Type the 1st integer: ";
    cin >> x;
    cout << "Type the 2nd integer: ";
    cin >> y;
    if (x % y == 0)
        cout << "\n1st integer is a multiple of the 2nd" << endl;
    else
        cout << "\n1st integer is not a multiple of the 2nd" << endl;

    return 0;
}
