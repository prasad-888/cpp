#include<iostream>
using namespace std;

class ABC
{
    private:
        int x,y,z;
    public:
        friend void operator>>(istream& din,ABC& o)
        {
            din>>o.x;
            din>>o.y;
            din>>o.z;
        }
        friend void operator<<(ostream& dout,ABC& o)
        {
            dout<<o.x;
            dout<<o.y;
            dout<<o.z;
        } 
};

int main()
{
    ABC ob;
    cin>>ob; //operator>>(cin,ob)
    cout<<ob; //operator<<(cout,ob)
    return 1;
}