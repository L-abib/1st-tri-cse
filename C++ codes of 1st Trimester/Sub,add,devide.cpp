#include <iostream>

using namespace std;

int main()
{
     int x, y, add, sub, div, rem, calc;
     cout << "Enter 1 to add, 2 to sub or 3 to divide" << endl;
     cin >> calc;
     cout << "Enter 1st number: " << endl;
     cin >> x;
     cout << "Enter 2nd number: " << endl;
     cin >> y;
     switch(calc)
     {
     case 1:
        add = x + y;
        cout << "Add is: " << add << endl;
        break;
     case 2:
        sub = x - y;
        cout << "Sub is: " << sub << endl;
        break;
     case 3:
        div = x / y;
        cout << "Division is: " << div << endl;
        rem = x % y;
        cout << "Remainder is: " << rem << endl;
        break;
     }
    return 0;
}


//Question: Write a program that either add,sub and divide two numbers. Also, it prints the remainder from the division. First, prompt the user to choose an operation; then prompt for two numbers and display the results and the reminder.
