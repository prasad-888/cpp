#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int& b=a;// b is reference variable of a
    //b is alias of a
    //no separate memory allocation for reference variable
    cout<<endl<<"Value of a is"<<a;
    cout<<endl<<"Value of b is"<<b;

    b=7;
    cout<<endl<<"Value of a is"<<a;
    cout<<endl<<"Value of b is"<<b;

    return 0;

}
