#include <iostream>

using namespace std;

class pet
{
    public:
    string name, color;
    void display()
    {
        cout << name << " " << color << endl;
    }

    pet(string x, string y)
    {
        name = x;
        color = y;
    }
    public:
    void makeSound()
    {
        string dname, dcolor;
    }

};

class dog : public pet
{
public:
    string dname, dcolor;

    void makeSound(string a, string b)
    {
        dname = a;
        dcolor = b;
    }
    void display()
    {
        cout << dname << " " << dcolor << endl;
    }


};

int main()
{
    pet cat("jerry", "red");
    cat.display();

    dog d;
    d.makeSound();
    d.display("tom", "blue");



    return 0;
}


//Question: Develop a Pet class that contains data member: name and color. The class has a constructor with name and color of the pet along with a method makeSound(). A Dog class inherits the pet class and in this class you have to redefine the makeSound() with DogÕs information.
