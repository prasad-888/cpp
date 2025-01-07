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
    Fraction operator+(Fraction &);
    void operator++();
    Fraction operator--();
};
    Fraction Fraction:: operator+(Fraction& f)
    {
        Fraction ans;
        ans.n=(n*(f.d))+(d*f.n);
        ans.d=d*f.d;
        
        return ans;
    }
    void Fraction::operator++()
    {
        n=n+d;
    }

    Fraction Fraction::operator--()
    {
        n=n-d;
         
        return(*this);
    }


int  main()
{
    Fraction f1,f2,f3,f4;
    f1.accept();
    f2.accept();

    f3=f1+f2;
    f3.display();

    ++f1;
    f1.display();

    f4=--f2;
    f4.display();

    return 0;
}
/*
now using friend function

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
        Faction operator+(Fraction&);
        friend void operator++(Fraction&);
        friend fraction operator--(Fraction &);
};


Fraction Fraction::operator(Fraction &f){
    Fraction ans;
    ans.n=(n*f.d)+(d*f.n);
    ans.d=d*f.d;
    return ans;
}
void operator++(Fraction& f)
{
    f.n=f.n+f.d;
}
Fraction operator--(Fraction& f)
{
    f.n=f.n-f.d;
}


main()
{
    Fraction f1,f2,f3,f4;
    f1.accept();
    f2.accept();

    f3=f1+f2;
    f3.display();


    ++f1;
    f1.display();


    f4=--f2;
    f4.display(); 
}






*/