/*
Write a C++ program to create a class E Bill with data member Cust_Name,Meter_Id,No of Units and total charge
Write member function to accept and display customer information by calculating charges
(Rules to calculate electricity board charges)
For first 100 units:Rs 1 per unit 
For next 200 units:Rs 2 per unit
Beyond 300 units: Rs 5 per unit

All user are charged  a minimum of Rs 150.If the Total charge is more than
Rs250.00 then an additional charge of 15% is added.

*/
#include<iostream>
using namespace std;

class Bill
{
    private:
        char Cust_Name;
        char Meter_Id;
        int Units;
        int totalcharge;

    public:

        void accept()
        {
            cout<<"Enter Cust_Name";
            cin>>Cust_Name;
            cout<<"Enter Meter_Id";
            cin>>Meter_Id;
            cout<<"Enter units";
            cin>>Units;



        }
        void display()
        {

        }

};


int main()
{




    return 0;
}