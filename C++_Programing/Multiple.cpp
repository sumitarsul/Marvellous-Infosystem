#include<iostream>
using namespace std;

class BaseA
{
    public:
        int i,j;

        BaseA()
        {
            cout<<"Inside BaseA Constructor\n";
        }
        ~BaseA()
        {
            cout<<"Inside BaseA Distructor\n";
}
        void fun()
        {
            cout<<"Inside BaseA fun\n";
        }
    };

    class BaseB
{
    public:
        int x,y;

        BaseB()
        {
            cout<<"Inside BaseB Constructor\n";
        }
        ~BaseB()
        {
            cout<<"Inside BaseB Distructor\n";
        }
        void gun()
        {
            cout<<"Inside BaseB gun\n";
        }
    };
    class Derived : public BaseA,BaseB
    {
        public:
            int a;

            Derived()
            {
                cout<<"inside Derived constructor\n";
            }
            ~Derived()
            {
                cout<<"inside Derived distructor\n";
            }
            void sun()
            {
                cout<<"inside Derived sun\n";
            }
    };

int main()
{
    cout<<sizeof(BaseA)<<"\n";
    cout<<sizeof(BaseB)<<"\n";
    cout<<sizeof(Derived)<<"\n";
    return 0;
}