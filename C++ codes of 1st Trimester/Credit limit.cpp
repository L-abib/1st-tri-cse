#include <iostream>

using namespace std;

int main()
{
    int an; //account number
    int bal; //Balance at the beginning of the month
    int charge; //Total of all items charged by this customer this month
    int c; // Total credits applied to this customer's account this month
    int cl; // Allowed credit limit
    int nbal; //new balance

    {
        cout << "Enter account number:"<< endl; // output sentence
        cin >> an; // input value of account number

        cout << "Enter balance at the beginning of the month:"<< endl; // outpul sentence
        cin >> bal; // input value of balance at the beginning of the month

        cout << "Enter total of all items charged by this customer this month:"<< endl; //output sentence
        cin >> charge; // input value of total of all items charged by this customer this month

        cout << "Enter total credits applied to this customer's account this month:"<< endl; // output sentence
        cin >> c; // input value of total credits applied to this customer's account this month

        cout << "Enter allowed credit limit:"<< endl; //output sentence
        cin >> cl; // input value of allowed credit limit

        while (nbal < cl) // using while statement
        {
            nbal = bal+charge-c; //calculating new balance
            cout << "Your new balance is:" << nbal<< endl; //output sentence
            if (nbal > cl) //putting an if condition
            {
                cout << "Credit Limit Exceeded" << endl; //if new balance is greater than credit limit then this message will be shown
            }
            break;
        }

            cout << "Account number:" << an << endl; //output sentence
            cout << "Credit limit:" << cl << endl; //output sentence



    }


    return 0;
}



/*Question: Develop a C++ program that will determine whether a department-store customer has exceeded
the credit limit on a charge account. For each customer, the following facts are available:

a) Account number (an integer)
 b) Balance at the beginning of the month
 c) Total of all items charged by this customer this month
 d) Total of all credits applied to this customer's account this month
 e) Allowed credit limit

The program should use a while statement to input each of these facts, calculate the new
balance (= beginning balance + charges Ð credits) and determine whether the new balance
exceeds the customerÕs credit limit. For those customers whose credit limit is exceeded, the
program should display the customerÕs account number, credit limit, new balance and the
message ÒCredit Limit ExceededÓ.
