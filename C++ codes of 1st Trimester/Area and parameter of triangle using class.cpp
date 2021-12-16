#include <iostream>

using namespace std;

class triangle
{
public:
    float area, peri;
    void display()
    {
        cout << "Area of the triangle with sides 3, 4 and 5 units is: " << area << endl;
        cout << "Perimeter of the triangle with sides 3, 4 and 5 units is: " << peri << endl;
    }

};

int main()
{
    triangle tri;
    tri.area = 88.18;
    tri.peri = 12;
    tri.display();

    return 0;
}


//Question: Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.
