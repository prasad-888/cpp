#include<iostream>
using namespace std;



int main()
{
    int* a; // memory is not reserved
    int n;
    cout<<endl<<"Enter how many numbers";
    cin>>n;

    a=new int[n]; //dynamic memory allocation(runtime memory)

    for(int i=0;i<n;i++)
        cin>>a[i];   //scanf("%d",&a[i]);

    cout<<endl<<"All members are as follows\n";
    for(int j=0;j<n;j++)
        cout<<endl<<a[j];  //printf("%d",a[j]);

    return 1;


}