#include<iostream>
using namespace std;
// no separate memory allocation for x and y
// x is alias of a, y is alias of b
//call  by reference using reference variable in cpp
void swap(int& x,int& y)
{
    int t;
    t=x;
    x=y;
    y=t;

}

int main()
{
    int a=5, b=2;

    cout<<endl<<"Before swapping "<<endl;
    cout<<a<<" "<<b;

    swap(a,b);//call by reference in cpp
    // swap(&a,&b); call by reference in c lang

    cout<<endl<<"After swapping "<<endl;
    cout<<a<<" "<<b;

    return 0;


}
/* c programming call by reference using pointer 
void swap(int* x,int* y)
{
    int t;
    t= x;
    *x= *y;
    *y= t;
}

*/