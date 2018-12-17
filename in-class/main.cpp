//Ziqi Wang 11.30
#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <numeric>
using namespace std;
bool GreaterThan6(int);
void DivideBy2(int);
int main() {
    deque<int> deque1;
    ostream_iterator<int>output(cout," ");
    vector<int> a{3, 4, 6, 2, 9, 1, 5, 0, 7, 8};
    for(int i=0;i<a.size();i++)
        deque1.push_back(a[i]);
    cout<<"After assign 3, 4, 6, 2, 9, 1, 5, 0, 7, 8 to deque"<<endl;
    copy(deque1.begin(),deque1.end(),output);
    //3, 4, 6, 2, 9, 1, 5, 0, 7, 8
    deque<int>::iterator newlastelement;
    newlastelement=remove(deque1.begin(),deque1.end(),7);
    for(deque<int>::iterator i=newlastelement+1;i<=deque1.end();i++)
    {
        deque<int>::iterator j=i;
        deque1.erase(j);
    }
    cout<<"\nAfter remove 7 from deque :"<<endl;
    copy(deque1.begin(),deque1.end(),output);
    replace_if(deque1.begin(),deque1.end(),GreaterThan6,10);
    cout<<"\nAfter replace elements which greater than 6 to 10"<<endl;
    copy(deque1.begin(),deque1.end(),output);
    int sum=accumulate(deque1.begin(),deque1.end(),0);
    cout<<"\nThe sum of deque:"<<sum;
    deque1.push_front(sum);
    cout<<"\nAfter push the sum to the head of deque :"<<endl;
    copy(deque1.begin(),deque1.end(),output);
    int counter=count_if(deque1.begin(),deque1.end(),GreaterThan6);
    cout<<"\nThe number of elements which is greater than 6 :"<<counter;
    cout<<"\nOutput the elements divided by 2:"<<endl;
    for_each(deque1.begin(),deque1.end(),DivideBy2);
    cout<<"\nSorting the deque:"<<endl;
    sort(deque1.begin(),deque1.end());
    copy(deque1.begin(),deque1.end(),output);
    deque<int>::iterator location=find(deque1.begin(),deque1.end(),6);
    cout<<"\nThe location of 6 is: "<<location-deque1.begin();
    ostream_iterator<int>output1(cout,", ");
    cout<<"\nOutput the deque"<<endl;
    copy(deque1.begin(),deque1.end(),output1);
    return 0;
}
bool GreaterThan6(int x)
{
    return x>6;
}

void DivideBy2(int x)
{
    int y=x/2;
    cout<<y<<" ";
}
