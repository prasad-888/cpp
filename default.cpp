#include<iostream>
using namespace std;

//to solve problem of missing parameter,we use default parameter
//right to left :from trailing side and sequentially


//void fun(int a=11,int b,int c=21); invalid
//void fun(int a=11,int b); invalid
//void fun(int a=1,int b=2,int c); invalid



//void fun(int a,int b,int c=1); valid
//void fun(int a,int b=1,int c=1); valid
//void fun(int a=1,int b=1,int c=1); valid


void fun(int a=0,int b=9,int c=21)
{
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c;
}

int main()
{
    fun(11,22,33);//11,22,33
    fun(11,22);//11,22,21
    fun(11);
    fun();
    return 0;
}