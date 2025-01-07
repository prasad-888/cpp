#include<iostream>
using namespace std;
class A
{
    private:
        int a;
        int b;
    public:
        void setters(int a,int b)
        {
            /*
            a=a; // problem:data member hiding
            b=b; // data member hiding // local a= local a
            */
            this->a=a;
            this->b=b;
        }
        void display()
        {
            cout<<endl<<"First number:"<<a;
            cout<<endl<<"Second number:"<<b;

        }
};


int main()

{
    A ob;
    ob.setters(10,20);
    ob.display();

    return 0;
}