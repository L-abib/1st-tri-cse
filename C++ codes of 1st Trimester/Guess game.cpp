#include <iostream>


using namespace std;

int main()
{
   int sNum=7;
   int num;
   for(int i=0; i<=2; i++)
   {
       if(num!=sNum)
       {
           cout<<"Enter your guess: ";
          cin>>num;
       }
       else
       {
           break;
       }
   }

    if(num!=sNum)
   {
       cout<<"You lose!";
   }
   else
   {
       cout<<"You win!";
   }



    return 0;
}



//Question: Modify the game so that the user can have three guesses. After three guesses the user will get "You Lose!".
