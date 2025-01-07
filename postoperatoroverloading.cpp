#include<iostream>
using namespace std;

class Fraction
{
    private:
        int n,d;
    public:
        void accept()
        {
            cin>>n>>d;
        }
        void display()
        {
            cout<<n<<"/"<<d;
        }
        Fraction operator+(Fraction&);
        void operator++(int);
        Fraction operator--(int);
};

Fraction Fraction::operator+(Fraction& f)
{
    Fraction ans;
    ans.n=(n*f.d)+(d*f.n);
    ans.d=d*f.d;
    return ans;
}

void Fraction::operator++(int x)
{
    n=(d*x)+n;
}

Fraction Fraction::operator--(int x)
{
    Fraction f;
    f=(*this);
    n=n-(d*x);
    return f;
}


int main()
{
    Fraction f1,f2,f3,f4;
    f1.accept();
    f2.accept();

    f3=f1+f2;
    f3.display();


    f1++;
    f1.display();

    f4=f2--;
    f4.display();
    f2.display();
}
/*
*/