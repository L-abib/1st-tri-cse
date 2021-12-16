#include<iostream>

using namespace std;

    class Vehicle
    {

        public:
        int speed, rengo;
        char color;

    };

    class RailVehical : public Vehicle
    {
        public:

          char name;
          int noc;

    };

    class MotorVehicle : public Vehicle
    {
        public:


        int now, nod;

    };

    class car : public RailVehical, public MotorVehicle
    {
        public:

            char model, brand;


    };

    class
    {
            public:
        double display()
        {
            cout << "car speed: ";
            cin >> speed;
            cout << "\ncar's registration number: ";
            cin >> regno;
            cout << "\ncar color: ";
            cin >> color;
            cout << "\car name: ";
            cin >> name;
            cout << "\ncar's number of chamber: ";
            cin >> noc;
            cout << "\ncar's number of wheels: ";
            cin >> now;
            cout << "\ncars number of doors: ";
            cin >> nod;
            cout << "\ncar's model name: ";
            cin >> model;
            cout << "\nname of brand: ";
            cin >> brand;



        }

    };





int main()
{
    car car;
    car.display;
    cout << car.display << endl;

    return 0;
}


//Question: Write a program to design a Vehicle class having speed, color, registration number as member data. Design two other classes RailedVehicle (Having name, noOfChambers as member data) and MotorVehicle (Having noOfwheels, noOfDoors as member data). Both classes will inherit the class Vehicle. Now, design another class called Car as derived class of MotorVehicle with model and brand as data member with a display function. In display function, all the information related with the car object should be displayed.
