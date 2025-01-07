#include<iostream>
using namespace std;
class A
{
    private:
        void fun()
        {
            cout<<endl<<"I am private";
            cout<<endl<<"No one can access me outside class";
        }
    public:
        void fun1()
        {
            cout<<endl<<"I am public";
            cout<<endl<<"Accessible for everyone";
            fun();
        }


};

int main()
{
    
    
    A ob;
    ob.fun1();
    return 0;
}