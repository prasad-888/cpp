#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;
class CuboidSolid

{
private:
    float l;
    float h;
    float b;
    float m;
    float v;
    float sa;
    float d;
public:
        void set(float tl, float tb,float th,float tm)
        {
            l=tl;
            b=tb;
            h=th;
            m=tm;
        }

        float getlength()
        {
          return l; 
        }
        float getbreadth()
        {
          return b;
        }
        float getheight()
        {
            return h;
        }
        float getmass()
        {
            return m;
        }
        
        float getvolume()
        {
           v=l*b*h;
           return v;
        }
        float getsurfacearea()
        {
            sa=2*((l*b)+(b*h)+(l*h));
            return sa;
        }
        float getdensity()
        {
            d=m/v;
            return d;
        }







};

int main()
{
 float tl,tb,th,tm;
 cout<<endl<<"Enter length";
 cin>>tl;
 cout<<endl<<"Enter breadth";
 cin>>tb;
 cout<<endl<<"Enter height";
 cin>>th;
 cout<<endl<<"Enter mass:";
 cin>>tm;

 CuboidSolid cs1;
 cs1.set(tl,tb,th,tm);


 cout<<endl<<"Lenght is"<<cs1.getlength();
 cout<<endl<<"Breadth is"<<cs1.getbreadth();
 cout<<endl<<"Height is"<<cs1.getheight();
 cout<<endl<<"Mass is"<<cs1.getmass();

cout<<endl<<"Volume is"<<cs1.getvolume();
cout<<endl<<"Surface area is"<<cs1.getsurfacearea();
cout<<endl<<"Density is"<<cs1.getdensity();

return 0; 
}
