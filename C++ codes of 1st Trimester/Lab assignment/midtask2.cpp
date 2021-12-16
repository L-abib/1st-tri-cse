#include <iostream>

using namespace std;

int main()
{
    double wgt, hgt, BMI;
    cout << "Enter weight in kilogram: ";
    cin >> wgt;
    cout << "Enter height in meters: ";
    cin >> hgt;
    BMI = wgt / (hgt * hgt);
    cout << "BMI is: " << BMI <<endl;

    return 0;
}
