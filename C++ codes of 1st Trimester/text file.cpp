#include <iostream>
#include<fstream>
using namespace std;


int main()
{
    ofstream stInfo("student.txt");
    cout<<"Enter student Name, Age, ID, Date of birth, Nationality, School, College, University, Address, NID no, Email, Phone number, Favourite movie, Favourite sports, Favourite anime "<<endl;
    int age, id, nid, phno;
    string stdName, dob, Nat, scl, clg, uni, add, email, favMovie, favSports, favAnime;
    while(cin>>age>>id>>nid>>phno>>stdName>>dob>>Nat>>scl>>clg>>uni>>add>>email>>favMovie>>favSports>>favAnime)
    {
      stInfo<<stdName<<" "<<age<<" "<<id<<" "<<dob<<" "<<Nat<<" "<<scl<<" "<<clg<<" "<<uni<<" "<<add<<" "<<nid<<" "<<email<<" "<<phno<<" "<<favMovie<<" "<<favSports<<" "<<favAnime<<endl;
    }


}


/*Question: Parameters to be printed out,
1. Name
2. Age
3. ID
4. Date of Birth
5. Nationality
6. School
7. College
8. University
9. Address
10. NID No
11. Email
12. Phone Number
13. Favorite Movie
14. Favorite Sports
15. Favorite Anime
*/
