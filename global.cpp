#include<iostream>
using namespace std;

int a=5;

int main()
{
    int a=7;
    {
        int a=9;
        cout<<a;
        cout<<::a; //to access gloabl variable
    }
    cout<<a;
}