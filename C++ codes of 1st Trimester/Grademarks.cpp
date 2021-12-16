#include <iostream>

using namespace std;

int main()
{
     int num;
    cout << "Enter a number to check Grade"<< endl;

    cin >> num;
        if (num <0 || num > 100)
        {
            cout << "Wrong Number" << endl;
        }
        else if (num >= 0 && num < 50)
        {
            cout << "Fail" << endl;
        }
        else if (num >= 50 && num < 60)
        {
            cout << "D Grade" << endl;
        }
        else if (num >= 60 && num < 65)
        {
            cout << "D+ Grade" << endl;
        }
        else if (num >= 65 && num < 70)
        {
            cout << "C Grade" << endl;
        }
        else if (num >= 70 && num < 75)
        {
            cout << "C+ Grade" << endl;
        }
        else if (num >= 75 && num < 80)
        {
            cout << "B Grade" << endl;
        }
        else if (num >= 80 && num < 85)
        {
            cout << "B+ Grade" << endl;
        }
        else if (num >= 85 && num < 90)
        {
            cout << "A Grade" << endl;
        }
        else if (num >= 90 && num < 100)
        {
            cout << "A+ Grade" << endl;
        }


    return 0;
}
