//Ziqi Wang 10.20

//Member-function definitions for class IntegerSet

#include <iostream>
#include <iomanip>

using namespace std;
#include "IntegerSet.h"
//constructor

IntegerSet::IntegerSet()
{
    for(int i=0;i<101;i++)set[i]=0;
}

void IntegerSet::inputSet()
{
    int number;
    do
    {
        cout<<"Enter an element(-1 to end):";
        cin>>number;

        if(validEntry(number))
            set[number]=1;
        else if(number!=-1)
            cout<<"Invalid Element\n";
    }while(number!=-1);
    cout<<"Entry complete\n";
}
void IntegerSet::printSet() const
{
    cout<<"{";
    for(int u=0;u<101;u++)
        if(set[u])cout<<u<<" ";

    cout<<"}"<<endl;
}//end function printSet

IntegerSet IntegerSet::UnionOfSet(IntegerSet b)
{
    IntegerSet c;
    for(int i=0;i<101;i++)
    {
        if(this->set[i]||b.set[i])
        {
            c.set[i]=1;
        }
        else
            c.set[i]=0;
    }
    return c;
}
IntegerSet IntegerSet::IntersectionOfSet(IntegerSet b)
{
    IntegerSet d;
    for(int i=0;i<101;i++)
    {
        if(this->set[i]&&b.set[i])
        {
            d.set[i]=1;
        }
        else
            d.set[i]=0;
    }
    return d;
}