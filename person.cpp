/*
Consider the following C++ class
class Persom
{
    char Name[20];
    char Addr[30];
    float Salary;
    float tax_amount;

public:   //member function


};

Calculate tax amount by checking salary of a person
For salary<=20000           tax rate=0
For salary>20000||<40000    tax rate=5% of salary
For salary>40000            tax rate=10% of salary
*/

#include<iostream>
using namespace std; //not required for turbo
class person{
    private:
        char name[20];
        char addr[20];
        float salary;
        float tax;
    public:
        void accept()
        {
            cout<<"enter name ";
            cin>>name;
            cout<<"Enter address";
            cin>>addr;
            cout<<"Enter salary";
            cin>>salary;
        }

        void display()
        {
            cout<<endl<<"Name"<<name;
            cout<<endl<<"Address"<<addr;
            cout<<endl<<"salary"<<salary;
            
        }

        void calculate()
        {
            if(salary<=20)
                tax=0;
            else if(salary>20000 && salary<=40000)
                tax=(salary*5)/100;
            else if(salary>40000)
                tax=(salary*10)/100;

            cout<<"Tax amount is"<<tax;
        }

};

int main()
{
    person p1;
    p1.accept();
    p1.display();
    p1.calculate();

}
/*
when input are taken from int main() function

#include<iostream>
#inlcude<string.h>
using namespace std;// not required for turbo
class person
{
    private:
        char name[20];
        char addr[20];
        float salary;
        float tax;

    public:
        void setperson(char n[],char a[],float s)
        {
            strcpy(name,n);
            strcpy(addr,a);
            salary=s;

        }
}

*/

/*class ke bahar definition
 #include<iostream>
 #include<string.h>
 using namespace std;
 class person
 {
    private:
        char name[20];
        char addr[20];
        float salary;
        float tax;
    public:
        void setperson(char[],char[],float);//member function decleration
        void display(); // member function declaration
        void calculate();//member function declaration

 };

 void person::setperson(char n[],char a[],float s)
 {
    strcpy(name,n);
    strcpy(addr,a);
    salary =s;
 }

 void person::display()
 {
    cout<<endl<<"Name :"<<name;
    cout<<endl<<"Address :"<<addr;
    cout<endl<<"Salary :"<<salary;
 }

 void person::calculate()
 {
    if(salary<=20000)
        tax=0;
    else if(salary>20000 && salary<=40000)
        tax=(salary*5)/100;
    else if(salary>40000)
        tax=(salary*10)/100;
    cout<<endl<<"Tax amount is"<<tax;
 }

 int main()
 {
    person p1;
    char tname[20],taddr[20];
    float ts;

    cout<<endl<<"Enter name";
    cin>>tname;
    cout<<endl<<"Enter address ";
    cin>>taddr;
    cout<<endl<<"Enter salary";
    cin>>ts;

    p1.setperson(tname,taddr,ts);
    p1.display();
    p1.calculate();

    return 0;
 }

*/