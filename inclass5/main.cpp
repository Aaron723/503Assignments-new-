
//Ziqi Wang 10.20

#include <iostream>
using namespace std;

#include "IntegerSet.h"
int main()
{
    IntegerSet a;
    IntegerSet b;
    IntegerSet c;
    IntegerSet d;

    cout<<"Enter set A:\n";
    a.inputSet();
    cout<<"set A is:\n";
    a.printSet();

    cout<<"Enter set B:\n";
    b.inputSet();
    cout<<"set B is:\n";
    b.printSet();

    c=a.UnionOfSet(b);
    //Union A and B, assign it to c.
    cout<<"\nUnion of A and B is:\n";
    c.printSet();

    d=a.IntersectionOfSet(b);
    //Intersection A and B, assign it to d.
    cout<<"\nIntersection of A and B is :\n";
    d.printSet();


    return 0;
}