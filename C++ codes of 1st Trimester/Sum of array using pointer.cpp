#include <iostream>


using namespace std;

int main()
{
    int x[5] = {10, 20, 30, 40, 50};
    int *p = x;
    int i, sum=0;
    for (i=0; i<5; i++)
    {
        sum = sum + *(p + i);
    }
    cout << "sum = " << sum << endl;

    return 0;
}


//Question: Write a program to find the sum of all the elements of an array using pointers.
