#include <iostream>

using namespace std;

class bankdata
{
    int mn;
    char n[20], tacc[10];
    float bal;
    void deposit();
    void withdraw();
};

void deposit()
{
    int dep;
    int bal;
    cout << "enter deposit ammount:" <<endl;
    cin >> dep;
    bal += dep;
}
void withdraw()
{
    int with;
    int bal;
    cout << "enter withdraw ammount:" <<endl;
    cin >> with;
    bal -= with;
}
int main()
{
    int mn;
    char n[20], tacc[10];
    float bal;

        cout<<"\n Accout No. ";
        cin>>mn;
        cout<<"\n Name : ";
        cin>>n;
        cout<<"\n Account Type : ";
        cin>>tacc;
        cout<<"\n Balance : ";
        cin>>bal;

        bankdata bd;
        bd.deposit();
        bd.withdraw();
        return 0;
}
