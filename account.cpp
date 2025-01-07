/*Define a Class account with following specifications
private data members
account number-automatically generated six digit account number ,first two digit are used
for bank code(assume the value 82)and next four digits for account number
account type-it can be one of the following type{saving,current,fixed,recurring}
amount-long integer for the balance amount
Owner Name-name of the owner

Public data members for 
   Setting and getting account type,initial amount and Owner Name
   Display account information


Write a main program to accept information from user and open at least five accounts and 
display their information.
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class accounts
{
private:
    long actno;
    char acttype[80];
    long amt;
    char owner[40];

public:
    void generateactno()
    {
        long code=82000;
        long tactno;
        tactno=rand()%10000;
        actno=code+tactno;
    }
    void setacttype(char type[])  // at the time of declaration of string  variable char[]
    {
       strcpy(acttype,type);
    }
    void setamt(long am)
    {
        amt=am;
    }
    void setowner(char o[])
    {
        strcpy(owner,o);
    }
    long getactno()
    {
        return actno;
    }
    char* getacttype()
    {
        return acttype;
    }
    
    long getamt()
    {
        return amt;
    }
    char* getowner()  //at the time of returning string the data type should be char*
    {
        return owner;
    }
};

int main()
{
    long tactno,tamt;
    char tacttype[80],towner[80];
    int i;
    int flag=0;



    accounts ob[3];
    for ( i = 0; i < 3; i++)
    {
        ob[i].generateactno();
        do
        {
        flag=0;
        cout<<endl<<"Enter account type";
        cin>>tacttype;
        if(strcmp(tacttype,"saving")==0|| strcmp(tacttype,"current")==0
        || strcmp(tacttype,"reccuring")==0)
        {
            flag=1;
            ob[i].setacttype(tacttype);
        }

        else
        {
            cout<<endl<<"Account type should be(saving/current/reccurring)";
        }
        }while (flag!=1);
        
        

        cout<<endl<<"Enter initial amount";
        cin>>tactno;
        
        cout<<endl<<"Enter owner name";
        cin>>towner;

        
        ob[i].setamt(tamt);
        ob[i].setowner(towner);

    }

    cout<<endl<<"All account information is as follows";
    cout<<endl<<"Account number"<<setw(10)<<"Act type"<<setw(10)<<"Owner"<<setw(10)<<"Balance"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<ob[i].getactno()<<setw(10);
        cout<<ob[i].getacttype()<<setw(10);
        cout<<ob[i].getowner()<<setw(10);
        cout<<ob[i].getamt();
        cout<<endl;
    }
    

    return 0;
}