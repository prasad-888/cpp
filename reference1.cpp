#include<iostream>
using namespace std;
//we are returning reference that means we are returning actual parameters 
//we are returning actual parameters ie variable
int& maximum(int& x,int& y)
{
    return(x>y)?x:y;
}
int main()
{

    int a=5,b=2;
    int ans;
    
    //variable=function();
    //function()=value;

    cout<<endl<<"First number"<<a;
    cout<<endl<<"Second number"<<b;
    maximum(a,b)= -1; // a = -1
    cout<<a;

    if(a==-1)
        cout<<endl<<"First number is greater";
    else
        cout<<endl<<"Second number is greater";

    

    

    return 0;
}