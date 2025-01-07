//polymorphism
//many forms
//compile time polymorphism
    //funtion overloading
    //operator overloading

//run time polymorphism
    //virtual function
    
/* function overloading*/

#include<iostream>
using namespace std;
// more than function having same name but number of parameters
//and type of parameters should be different
//return datatype doesn't matter 
void fun()
{
   cout<<endl<<"hello";
}
void fun(int x)
{
    cout<<endl<<"cpp programming";
}

void fun(int x,int y)
{
    cout<<endl<<"bye";
}



int main()
{
    fun();
    fun(3);
    fun(21,22);
    return 0;
}
