#include<iostream>
#include<iomanip>
using namespace std;
//if function is defined inside class,it is implicitly inline
//function defined outside class should be followed by inline keyword,to make it inline
class Employee
{
    private:
        int id; //data member or instance variable
        char name[20]; // data member or instance variable
        float sal; // data member or instance variable


    public:
        void accept() // member function or method
        {
            cout<<"Enter id";
            cin>>id;
            cout<<"Enter name";
            cin>>name;
            cout<<"Enter salary";
            cin>>sal;

        }
        void display()// member function or method
        {
            cout<<setw(10)<<id<<setw(30)<<name<<setw(20)<<fixed<<setprecision(2)<<setfill('*')<<sal<<endl;



        }


};

int main()
{
    Employee emp[100];
    int n,i;
    cout<<"Enter how many employees";
    cin>>n; //n==3
    
    
    cout<<"Enter details of "<<n<<"employees"<<endl;
    for(int i=0;i<n;i++)
        emp[i].accept();

    cout<<setw(10)<<"ID"<<setw(30)<<"NAME"<<setw(20)<<"SALARY"<<endl;
    for(i=0;i<n;i++)
        emp[i].display();

    return 0;
}