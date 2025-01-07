#include<iostream>

using namespace std;

class person
{
 private:
    int id;
    char name[30];
 public:
    void accept()
    {
        cout<<endl<<"Enter id";
        cin>>id;
        cout<<endl<<"Enter name";
        cin>>name;
    }
    void display()
    {
        cout<<endl<<"ID: "<<id;
        cout<<endl<<"NAME: "<<name;
    }
};


class employee
{
    private:
        int age;
        float salary;
    public:
        void accept()
        {
            
        }
}
int main()
{
 
    person p;
    p.accept();
    p.display();

   

    return 0;
}