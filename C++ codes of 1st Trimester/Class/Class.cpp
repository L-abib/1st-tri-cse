#include <iostream>

using namespace std;
class cusinfo
{
    private:
    char cusFirstName[30];
    char cusLastName[20];
    char cusDob[10];
    char cusTelNum[13];
    char cusCountry[20];


    public:
    void setCusInfo()
    {
        cout << "\nCustomer's first name: ";
        cin >> cusFirstName;
        cout << "\nCustomer's last name: ";
        cin >> cusLastName;
        cout << "\ncustomer's date of birth: ";
        cin >> cusDob;
        cout << "\nCustomer's telephone number: ";
        cin >> cusTelNum;
        cout << "\nCustomer's country name: " << endl;
        cin >> cusCountry;



    }
    void getCusInfo()
        {
            cout << "\nCustomer's first name: " << cusFirstName;
            cout << "\nCustomer's last name: " << cusLastName;
            cout << "\ncustomer's date of birth: " << cusDob;
            cout << "\nCustomer's telephone number: " << cusTelNum;
            cout << "\nCustomer's country name: " << cusCountry;
        }
};

int main()
{
    cusinfo cus101;
    cusinfo cus102;

    cus101.setCusInfo();
    cus102.getCusInfo();

    return 0;
}
