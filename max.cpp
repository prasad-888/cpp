#include<iostream>
using namespace std;

class maxdata
{
public:
        int maximum(int a,int b)
        {
            if(a>b)
                return a;
            else
                return b;
        }

        int maximum(int* a,int n)
        {
            int max;

            max=a[0];
            for(int i=1;i<n;i++)
            {
                if(a[i]>max)
                    max=a[i];
            }
        
         return max;
        }
};

int main()
{
maxdata ob;
int x,y;
cout<<endl<<"Enter two numbers";
cin>>x>>y;

cout<<endl<<"Maximum number is"<<ob.maximum(x,y);

int* a;
int n;
cout<<endl<<"Enter size of array";
cin>>n;
a=new int [n];
for(int i=0;i<n;i++)
    cin>>a[i];

cout<<endl<<"Maximum number is "<<ob.maximum(a,n)<<endl<<endl; //always pass array with size
    return 1;
}