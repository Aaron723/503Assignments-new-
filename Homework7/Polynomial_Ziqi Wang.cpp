
// Ziqi Wang 10.22
//
#include <iostream>
#include "Polynomial_Ziqi Wang.h"
using namespace std;

Polynomial::Polynomial()
{
    for(int i=0;i!=13;i++)
        Poly_terms[i]=0;
    term_number=0;
}
Polynomial::~Polynomial()
{
    term_number=0;
}
void Polynomial::Set_Polynomial()
{
    int term;
    cout<<"Enter the number of polynomial terms: ";
    cin>>term;
    term_number=term;
    float coef;
    int expo;
    if(validEntry(term))
    {
        for(int u=0;u!=term;u++)
        {
            cout<<"Enter coefficient and exponent :";
            cin>>coef;
            cin>>expo;
            Poly_terms[expo]=coef;
        }

    }
    else
        cout<<"The number of polynomial should be a integer in the range of 0~6!"<<endl;

}
 Polynomial Polynomial::operator+(Polynomial &b)
 {
    Polynomial c;
    c.term_number=0;
    for(int i=0;i<7;i++)
    {
        c.Poly_terms[i]= Poly_terms[i]+b.Poly_terms[i];
        if(c.Poly_terms[i])
            c.term_number++;
    }
    return c;
 }
Polynomial Polynomial::operator-(Polynomial &b)
{
    Polynomial d;
    for(int i=0;i<7;i++)
    {
        d.Poly_terms[i]= Poly_terms[i]-b.Poly_terms[i];
        if(d.Poly_terms[i])
            d.term_number++;
    }
    return d;
}
Polynomial Polynomial::operator*(Polynomial &b)
{
    Polynomial e;
    for(int i=0;i<7;i++)
        for(int j=0;j<7;j++)
            e.Poly_terms[i+j]+=Poly_terms[i]*b.Poly_terms[j];

    for(int i=0;i<13;i++)
        if(e.Poly_terms[i])
            e.term_number++;

     return e;
}
Polynomial& Polynomial::operator=(Polynomial b)
{
    if(this!=&b)
    {
        term_number=b.term_number;
        for(int i=0;i<13;i++)
            Poly_terms[i]=b.Poly_terms[i];
    }
    return *this;
}

Polynomial Polynomial::operator+=(Polynomial &b)
{
    term_number=0;
    for(int i=0;i<7;i++)
    {
        Poly_terms[i]+=b.Poly_terms[i];
        if(Poly_terms[i])
            term_number++;
    }
    return *this;
}
Polynomial Polynomial::operator-=(Polynomial &b)
{
    term_number=0;
    for(int i=0;i<7;i++)
    {
        Poly_terms[i]-=b.Poly_terms[i];
        if(Poly_terms[i])
            term_number++;
    }
    return *this;
}
Polynomial Polynomial::operator*=(Polynomial &b)
{
    Polynomial e;
    for(int i=0;i<7;i++)
        for(int j=0;j<7;j++)
            e.Poly_terms[i+j]+=Poly_terms[i]*b.Poly_terms[j];


    for(int i=0;i<13;i++)
    {
        if(e.Poly_terms[i])
            e.term_number++;
    }

     *this=e;

     return *this;
}
ostream &operator<<(ostream& output, const Polynomial &a)
{
    int counter=0;
    for(int i=0;i<13;i++)
        if(a.Poly_terms[i])
        {
            output<<a.Poly_terms[i]<<"x^"<<i;
            counter++;
            if(counter<=a.term_number-1)
                output<<" + ";
        }

        output<<"\nthe term number is: "<<a.term_number;
    return output;
}
void Polynomial::Get_Polynomial(Polynomial &b)
{
    term_number=b.term_number;
    for(int i=0;i<13;i++)
        Poly_terms[i]=b.Poly_terms[i];
}