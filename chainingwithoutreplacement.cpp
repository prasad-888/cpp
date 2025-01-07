#include<iostream>
#include<conio.h>
#include<stdlib.h>
#define MAX 10

class WO_chain
{
private:
    int a[MAX][2];
public:
    WO_chain();
    int create(int);
    ~WO_chain();
};

WO_chain::WO_chain()
{
    int i;
    for(i=0;i<MAX;i++)
    {
        a[i][0]=-1;
        a[i][1]=-1;
    }
}
WO_chain::~WO_chain()
{
}
int WO_chain::create(int num)
{
 int key;
 key=num%10;
 return key;
}




void main()
{
    int num,key,i;
    char ans;
    WO_chain h;
    clrscr();
    cout<<"\nChaining Without Replacement ";
    do
    {
        cout<<"\n Enter The Number";
        cin>>num;
        key==h.create(num);//returns hash key
        h.chain(key,num);//collision handled by chaining without replacement
        cout<<"\n Do U Wish To continue?(y/n)";
        ans=getche();

    } while (ans=='y');
    h.display();//display hash table
    getch();
}