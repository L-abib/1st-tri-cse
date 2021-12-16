#include <iostream>

using namespace std;

class reqtangle
{
public:
    float area1, area2;
    void Area()
    {
        cout << "Area of the reqtangle having (4,5) sides is: " << 4 * 5 << endl;
        cout << "Area of the reqtangle having (5,8) sides is: " << 5 * 8 << endl;

    }

};

int main()
{
    reqtangle req;

    req.Area();

    return 0;
}



//Question: Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and breadth are passed as parameters to its constructor.
