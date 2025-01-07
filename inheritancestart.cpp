#include<iostream>
using namespace std;

class A
{
    public:
        void m1()
            {
                cout<<"hello";
            }
        void m2()
        {
            cout<<"hi";
        }
        
};

class B:public A
{
    public:
        void m2()
        {
            cout<<"bye";

        }
        void m3()
        {
            cout<<"this is m3 cout";
        }
};

int main()
{
    B ob;
    ob.m1();
    ob.m2();
    ob.m3();

    return 0;
}