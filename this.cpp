#include<iostream>
using namespace std;

class A
{
    private:
        int a;
        int b;
    public:
        void input()
        {
            // 'this' pointer refers current object
            //this pointer stores address of current object
            //we can access members of current object using this pointer 
            //this->member
            //(*this).member
            cout<<"current object is"<<this;
            cout<<endl<<"Enter two numbers";
            cin>>this->a>>this->b; // not necessary to wrote this 
            // it gives the input to variables of current object
        }
        void display()
        {
            cout<<"First number "<<this->a;
            cout<<"Second number "<<this->b;


        }

};
int main()
{
    A ob;
    ob.input();
    ob.display();



    return 0;
}