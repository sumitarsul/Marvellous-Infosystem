#include<iostream>
using namespace std;

class PPA
{
    public:
        int No1;
        int No2;
        
        // Copy constructor
        PPA()
        {
            cout<<
        }
        PPA(int a, int b)
        {
            cout<<"Inside parametrised Constructor\n";

        }
        PPA(PPA &obj)
        {
            cout<<"Inside copy Constructor\n";
        }
       
        ~PPA()
        {
            cout<<"Inside Destructor\n";
        }    
        
};

int main()
{
    PPA pobj1;          // defualt
    PPA pobj2(11,21);   // parametrised
    PPA pobj3(pobj);    //Copy


    
    
    return 0;
}