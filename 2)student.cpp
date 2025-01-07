

//private data cant be accessed outside class directly
// to access private data,we must have public code(function)
// function inside class is called as member function or method
// class is a blueprint of object
// memory of data member are allocated separately for each object
// object is a runtime entity which holds data
//ADA a pure object oriented programming language not c,c++,java
// data member should be private but it could be anything
// member function should be public not anything
//but memory of member function is allocated commonly and shared by all objects
//private data + public code
// wrapping up of data and code into a single unit is called as data encapsulation i.e data hiding
// data is encapsulated by code private data is encapsulated by public code is called as data encapsulation i.e data hiding
// showing only essential function features without explaining details is called data abstraction  

#include<iostream>
using namespace std;

class student
{
    private:
        int roll;  //data member
        float mks; //data member
        char name[40]; // data member
    public:
        void accept() // member function
        {
            cout<<endl<<"Enter roll no";
            cin>>roll;
            cout<<endl<<"Enter name";
            cin>>name;
            cout<<endl<<"Enter marks";
            cin>>mks;

        }

        void display() // member function
        {
            cout<<endl<<"Your roll no is :"<<roll;
            cout<<endl<<"Your name is :"<<name;
            cout<<endl<<"Your marks are :"<<mks;

        }
};

int main()
{
    student st1,st2; //st1,st2 are object or instance of class student
    
    
    st1.accept(); // call member function with help of object and .operator
    st1.display();

    st2.accept();
    st2.display();
    
    return 0;
}

