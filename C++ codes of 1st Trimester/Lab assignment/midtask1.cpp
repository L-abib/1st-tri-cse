#include <iostream>

using namespace std;

int main()
{
    double tkd, cpl, akl, pfp, tpd, cpd;

    cout << "Total kilometers driven per day: " << endl;
    cin >>tkd;
    cout << "Cost per liter of petrol: " << endl;
    cin >>cpl;
    cout << "Average kilometer per liter: " << endl;
    cin >>akl;
    cout << "Parking fees per day: " << endl;
    cin >>pfp;
    cout << "Tolls per day: " << endl;
    cin >>tpd;

    cpd = (tkd / akl) * cpl;
    cpd = cpd + pfp + tpd;

    cout << "Users cost perday of driving to work: " << cpd << endl;

    return 0;

}
