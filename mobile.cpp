/*
Create a C++ class for inventory of Mobiles with data members Model,Mobile
Company,Color,Price and Quantity.Mobile can be sold if stock is available,otherwise
purchase will be made. Write necessary member functions for the following:
1)To accept mobile details from user
2)To sale a mobile (sale contains Mobile details and number of mobiles to be sold)
3)To purchase a mobile (Purchase contains Mobile details and number of mobiles to be purchasedd)


*/

#include<iostream>
using namespace std;

class mobile
{   
    private:
        char model[20];
        char company[20];
        char color[20];
        float price;
        int quantity;

    public:
        void accept()
        {
            cout<<endl<<"Enter model number:";
            cin>>model;
            cout<<endl<<"Enter company name:";
            cin>>company;
            cout<<endl<<"Enter color:";
            cin>>color;
            cout<<endl<<"Enter price:";
            cin>>price;
            cout<<endl<<"Enter quantity:";
            cin>>quantity;
        }
        void sale(int qty)
        {
            if(qty<=quantity)
            {
                quantity=quantity-qty;
                cout<<endl<<qty<<"number of units sold";

            }
            else{
                cout<<endl<<"Required quantity is not available";
                cout<<endl<<"Purchase required quantity";
            }

        }
        void purchase(int qty)
        {
            quantity=quantity+qty;
            cout<<endl<<qty<<"number of units purchased";
        }
        void display()
        {
            cout<<endl<<"Available stock "<<quantity;

        }

};

int main()
{
    int ch;
    int qty;
    mobile ob;
    
    ob.accept();
    do
    {
        cout<<endl<<"1.sale\n 2.Purchase \n 3.Display\n 4.Exit";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<endl<<"Enter quantity";
                    cin>>qty;
                    ob.sale(qty);
                    break;
            case 2:cout<<endl<<"Enter quantity";
                   cin>>qty;
                   ob.purchase(qty);
                   break;
            case 3:ob.display();
                   break; 
        }
    } while (ch!=4);
    
   return 0;
}