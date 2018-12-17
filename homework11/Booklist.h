//Ziqi Wang11.27
#include <vector>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
#ifndef HOMEWORK11_BOOKLIST_H
#define HOMEWORK11_BOOKLIST_H
template <class T>
class Booklist{
public:
    void insert(T&);
    void Print();
    void insert_certain(int, T&);
    void find_linear(T&);
    void find_binary(T&);
    void delete_item_position(int);
    void delete_item_name(T&);
    void sort_list_selection();
    void sorted_list_bubble();
    void Getcounter();
    Booklist();
    virtual ~Booklist();
private:
    int max_size;
    int counter;
    vector<T> book_list;
    bool sorted;
};
template <class T>
Booklist<T>::Booklist() {
    max_size=20;
    counter=0;
    sorted=false;
}
template <class T>
Booklist<T>::~Booklist() {
    book_list.clear();
}
template <class T>
void Booklist<T>::insert(T &name) {
    if(counter<max_size)
    {
        book_list.push_back(name);
        counter++;
        sorted=false;//Once I add a book on the end, the list become unsorted
    }
    else
        cout<<"The list is full!"<<endl;
}
template <class T>
void Booklist<T>::Print() {
    if(counter>=1)
    {
        for(int i=0; i!=counter;i++)
        {
            cout<<setw(8)<<book_list[i]<<",";
        }
        cout<<endl;
    }
    else
        cout<<"There is no book in the list!"<<endl;
}
template <class T>
void Booklist<T>::insert_certain(int position, T& name) {
    if(position>counter||position<0)
        cout<<"The position is out of range!"<<endl;
    else
    {
        T i;
        book_list.push_back(i);//add a empty position in the end
        for (int i = counter - 1; i != position - 1; i--)//move elements to the next position so that the new can be inserted.
        {
            book_list[i+1] = book_list[i];
        }
        book_list[position] = name;
        sorted=false;//when the user input a number in the list, it needs sort again
        counter++;
    }
}
template <class T>
void Booklist<T>::find_linear(T &name) {
    int position = -1;//define a number to suggest the position of book
    for (int i = 0; i != counter; i++)			//linear search
    {
        if (book_list[i] == name)
        {
            position = i;
            break;
        }
    }
    if(position==-1)//the book isn't in the list
        cout<<"This book is not in list!"<<endl;
    else
        cout<<"This book is on "<<position<<endl;
}
template <class T>
void Booklist<T>::find_binary(T &name) {
    if(sorted==true)//we can only use binary search in a sorted list
    {
        int low = 0, high = counter - 1, mid=0;
        while (low <= high)			//binary search
        {
            mid = (low + high) / 2;
            if (book_list[mid] == name)
                break;
            else
            {
                if (name>book_list[mid])
                    low = mid + 1;
                if (name<book_list[mid])
                    high = mid - 1;
            }

        }
        if (low > high)
            mid = -1;
        if(mid==-1)
            cout<<"This book isn't in list"<<endl;
        else
            cout<<"This book is on "<<mid<<endl;
    }
    else
        cout<<"List hasn't been sorted, can't use binary search!"<<endl;
}
template <class T>
void Booklist<T>::delete_item_position(int position) {
    if (position >= counter||position<0)//when the book doesn't exist, do nothing
        cout << "This book is not in the list!" << endl;
    else
    {
        for (int i = position; i != counter; i++)
        {
            book_list[i] = book_list[i+1];
        }
        counter--;
        book_list.pop_back();//remove the last position, or the push_back function could appear bug.
    }

}
template <class T>
void Booklist<T>::delete_item_name(T &name) {
    int position = -1;

    for (int i = 0; i != counter; i++)
    {
        if (book_list[i] == name)			//first, find the position of the book
        {
            position = i;
            break;
        }
    }
    if(position==-1)//when the book doesn't exist, do nothing
        cout<<"This book isn't in list!"<<endl;
    else
    {
        for (int i = position; i != counter; i++)
        {
            book_list[i] = book_list[i+1];
        }
        counter--;
        book_list.pop_back();//remove the last position, or the push_back function could appear bug.
    }
}
template <class T>
void Booklist<T>::sort_list_selection() {
    for (int j = 0; j != counter - 1; j++)
    {
        for (int i = j+1; i != counter; i++)
        {
            T t;

            if (book_list[i] < book_list[j])
            {
                t = book_list[j];

                book_list[j]= book_list[i];

                book_list[i]= t;

            }
        }
    }
    sorted=true;
}
template <class T>
void Booklist<T>::sorted_list_bubble() {
    for (int i = counter - 1; i != 0; i--)
    {
        for (int j = 0; j != i; j++)
        {
            if (book_list[j]> book_list[j+1])
            {
                T t;
                t =book_list[j];
                book_list[j]= book_list[j+1];
                book_list[j+1]= t;

            }
        }
    }
    sorted=true;
}
template <class T>
void Booklist<T>::Getcounter() {
    cout<<"counter="<<counter<<endl;
}
#endif //HOMEWORK11_BOOKLIST_H
