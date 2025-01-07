#include<iostream>
using namespace std;
// cout and cin are built in objects of std namespace
int main()
{
    int a,b;
    cout<<"enter two numbers";
    cin>>a>>b;

    cout<<endl<<"Addition of "<<a<<"and"<<b<<(a+b);
    cout<<endl<<"Substraction of"<<a<<"and"<<b<<(a-b);
    cout<<endl<<"Multiplication of"<<a<<"and"<<b<<(a*b);
    cout<<endl<<"Divisio  of"<<a<<"and"<<b<<(a/b);

    return 0;

}