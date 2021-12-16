#include <iostream>
int getch();

using namespace std;

int main()
{
    int sum, i;

    sum = 0;
    for (i = 1; i <= 10; i = i + 1)
        sum = sum + i;
    cout << "\nThe sum of 1 to 10 is: " << sum << endl;
    return 0;
    getch();

}


