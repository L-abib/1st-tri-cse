#include <iostream>

using namespace std;

class Tool
{
  protected:
  int strenght;
  char type;
  public:
  void setType(char x)
  {
      x=type;
  }
  public:
  void setStrenght(int S)
  {
      strenght=S;
  }
};

class Rock:public Tool
{
    Rock()
    {
        if(r==x)
        {
            cout<<"You chose rock"<<endl;
        }
    }
    public:
    bool fight(Tool)
    {
        if(type=s)
        {
            S=S*2;
            return S;
        }
        if(type=p)
        {
            S=S/2;
            return S;
        }
    }
};

class Paper:public Tool
{
    Paper()
    {
        if(p==x)
        {
            cout<<"You chose paper"<<endl;
        }
    }
    public:
    bool fight(Tool)
    {
        if(type=r)
        {
            S=S*2;
            return S;
        }
        if(type=s)
        {
            S=S/2;
            return S;
        }
    }
};

class Scissors:public Tool
{
   Scissors(int s)
   {
        if(s==x)
        {
            cout<<"You chose scissors"<<endl;
        }
    bool fight(Tool)
    {
        if(type=p)
        {
            S=S*2;
            return S;
        }
        if(type=r)
        {
            S=S/2;
            return S;
        }
    }
   }
};


int main()
{
    Tool tl;
    tl.setType(r);
    tl.setStrenght(10);
    Rock rk;
    rk.fight;
    Paper pp;
    pp.fight;
    scissors sc;
    sc.fight;

    return 0;
}


/* Question:
Implement a class called Tool. It should have an int field called strength and a char field called type. You may make them either private or protected. The Tool class should also contain the function void setStrength(int), which sets the strength for the Tool.

Create 3 more classes called Rock, Paper, and Scissors, which inherit from Tool. Each of these classes will need a constructor which will take in an int that is used to initialize the strength field. The constructor should also initialize the type field using 'r' for Rock, 'p' for Paper, and 's' for Scissors.



These classes will also need a public function bool fight(Tool) that compares their strengths in the following way:

Rock's strength is doubled (temporarily) when fighting scissors, but halved (temporarily) when fighting paper.
In the same way, paper has the advantage against rock, and scissors against paper.
The strength field shouldn't change in the function, which returns true if the original class wins in strength and false otherwise.
