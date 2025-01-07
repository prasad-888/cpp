#include<iostream>
using namespace std;
int main()
{
    int a[100];  // memory is reserved before execution(static memory allocation)
    int n;
    cout<<endl<<"Enter how many numbers";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];      //scanf("%d",&a[i]);

    cout<<endl<<"All numbers are as follows\n";
    for(int j=0;j<n;j++)
        cout<<endl<<a[j];   //printf("%d",a[j]);

    return 1;

}