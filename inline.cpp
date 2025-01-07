#include<iostream>
using namespace std;

inline int maximun(int a,int b)
{
    return(a>b)?a:b;
}

 int main()
{
    cout<<endl<<"maximum"<<maximun(5,2); //function call



    return 0;
}
// if function definition is followed ny inline kweyword then function becomes inline
// inline function sends a request to compiler
//for replacement of function definition by function call
//request may be ignored by compiler and function will get executed in regular manner
//if function code is complex then 100% ignored by compiler
    //satic variable
    //recursion
    //loop
//if function is defined inside class then it is implicitly inline
//if function is defined outside class then you have to write the word inline
  // example inline void employee::m1()