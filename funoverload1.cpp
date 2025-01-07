#include<iostream>
using namespace std;

//1) exact matching int,int float,float
//2)alternative matching 
//3)if 1 and 2 fails then error,ambiguity occured

void print(int a,int b)
{
    cout<<"Hello";
}

void print(float a,float b)
{
    cout<<"Hi";
}

int main()
{
    print(5,2);
    return 0;
}