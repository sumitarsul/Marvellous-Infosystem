#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j;

        Base()
        {
            cout<<"Inside Base constructor\n";  // constructor
        }

        ~Base()
        {
            cout<<"Inside Base distructor\n";  // Distrcotor
        }

        void fun()
        {
            cout<<"Inside Base Fun\n";
        }

         void gun()
        {
            cout<<"Inside Base gun\n";
        }
};
class Derived : public Base
{
    public:
    int x,y;

 Derived()
 {
    cout<<"Inside Derived constructor\n";
 }
 ~Derived()
 {
    cout<<"Inside Derived distructor\n";
 }
 void sun()
 {
    cout<<"Inside Derived Sun\n";
 }

};
class DerivedX : public Derived
{
    public:
        int a;

        DerivedX()
        {
        cout<<"Inside DerivedX constructor\n";
        }
        ~DerivedX()
        {
        cout<<"Inside DerivedX distructor\n";
        }
        void run()
        {
            cout<<"Insie Derived run\n";   
        }
};

int main()
{
    DerivedX dobj;

    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();


    return 0;
}
