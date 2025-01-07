/*
Write the definition for a class Cylinder that contains data members radius and height.The class has
the following member functions:
a.void setradius(float)to set the radius of data member
b.void setheight(float)to set the height of data member 
c.float volume() to calculate and return the volume of the cylinder
d.float area() to calculate and return the area of the cylinder
Write a C++ program to create two cylinder objects and display each cylinder and its area and volume

*/




#include<iostream>
using namespace std;

class Cylinder
{
    private:
        float radius;
        float height;
        float a;
        float v;
        
    public:
        void setradius(float);
        void setheight(float);
        float volume()
        {
            v=3.14*radius*radius*height;
            return v;
        }
        float area()
        {
            a=(2*3.14*radius*height)+(2*3.14*radius*radius);
            return a;
        }

};

void Cylinder::setradius(float tr)
{
    radius=tr;
}

void Cylinder::setheight(float th)
{
    height=th;
}

int main()
{
    Cylinder c1;
    float tr,th;
    cout<<endl<<"Enter radius:";
    cin>>tr;
    cout<<endl<<"Enter height:";
    cin>>th;
    c1.setradius(tr);
    c1.setheight(th);

    cout<<endl<<"Area of cylinder is"<<c1.area();
    cout<<endl<<"Volume of cylinder is"<<c1.volume();





    return 0;
}