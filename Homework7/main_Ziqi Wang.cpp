//Ziqi Wang 10.22
#include <iostream>
#include "Polynomial_Ziqi Wang.h"
using namespace std;
int main()
{
    Polynomial a;
    Polynomial b;
    Polynomial c;
    Polynomial d;
    Polynomial e;
    Polynomial f;
    Polynomial g;
    Polynomial h;
    a.Set_Polynomial();
    b.Set_Polynomial();
    cout<<"First Polynomial is : "<<a<<"\n";
    cout<<"Second Polynomial is : "<<b<<"\n";
    c=a+b;
    d=a;
    d+=b;
    cout<<"Adding polynomial yields: "<<c<<"\n";
    cout<<"+= the polynomial yields: "<<d<<"\n";
    e=a-b;
    f=a;
    f-=b;
    cout<<"Subtracting the polynomial yield : "<<e<<"\n";
    cout<<"-= the polynomials yields : "<<f<<"\n";
    g=a*b;
    h.Get_Polynomial(a);
    h*=b;
    cout<<"Multiplying the polynomials yields: "<<g<<"\n";
    cout<<"*= the polynomial yields: "<<h<<endl;
    return 0;
}