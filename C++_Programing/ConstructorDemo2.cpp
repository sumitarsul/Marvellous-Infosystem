#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;
        
        // pratametrisd constructor
        PPA(int a, int b)
        {
            cout<<"Inside parametrised Constructor\n";
        }
        PPA()
        {
            cout<<"Inside Default Construction\n";
        }
       
        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }    
        
};

int main()
{
    PPA pobj1;
    PPA pobj2(11,21);


    
    
    return 0;
}