#include <iostream>
int getch();

using namespace std;

int main()
{
    int acno;
    double balb, chrg, tcred, acred, nbal;
    cout << "Account no: ";
    cin >> acno;
    cout << "Balance at the begining of the month: ";
    cin >> balb;
    cout << "Total charged this month: ";
    cin >> chrg;
    cout << "Total credit applied this month: ";
    cin >> tcred;
    cout << "Allowed credit limit: ";
    cin >> acred;

    nbal = balb + chrg - tcred;


    while (nbal >= acred)
    {
        cout << "\nAccount no: " << acno;
        cout << "\nAllowed credit limit: " << acred;
        cout << "\nNew balance: " << nbal;
        cout << "\n\nCredit Limit Exceeded" << endl;
        break;
    }
     cout << "\nNew balance: " << nbal << endl;

    return nbal;
    getch();
}
