#include <iostream>

using namespace std;

class Average
{
    public:
    float a, b, c;
    public:
    void getData(){
        cout<<"Enter the numbers: "<<endl;
        cin>>a>>b>>c;

    }
};

class display:public Average
{
    public:
  void result(){
    float reslt;
    reslt=(a+b+c)/3;
    cout<<"Average of three numbers is: "<<reslt;

}
};

int main()
{
    display st;
    st.getData();
    st.result();


    return 0;
}
