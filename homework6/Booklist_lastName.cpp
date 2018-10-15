//
// Created by Zi Wan on 10/13/18.
//
#include"Booklist_lastName.h"
#include<iostream>
#include<iomanip>
using namespace std;
Booklist::Booklist()
{
    max_size=20;
    counter=0;
    sorted=false;

}
Booklist::~Booklist() {
    book_list.clear();
}
void Booklist::insert(int ISBN) 
{
    if(counter<=max_size)
    {
        book_list.push_back(ISBN);
        counter++;
        sorted=false;
    }
    else
        cout<<"The list is full!"<<endl;
}

void Booklist::Print()
{
    if(counter>=1)
    {
        for(int i=0; i!=counter;i++)
        {
            cout<<setw(4)<<book_list[i]<<",";
        }
        cout<<endl;
    }
    else
        cout<<"There is no book in the list!"<<endl;
}
void Booklist::insert_certain(int position, int ISBN)
{
    if(position>counter||position<0)
    {
        cout<<"The position is out of range!"<<endl;
    }
    else
    {
        book_list.push_back(0);
        for (int i = counter - 1; i != position - 1; i--)			//move elements to the next position so that the new can be inserted.
        {
            book_list[i+1] = book_list[i];
        }
        book_list[position] = ISBN;
        sorted=false;
        counter++;
    }
}
void Booklist::find_linear(int ISBN)
{
    int position = -1;		//if the book isn't in the list, return -1.
    for (int i = 0; i != counter; i++)			//linear search
    {
        if (book_list[i] == ISBN)
        {
            position = i;
            break;
        }
    }
    if(position==-1)
        cout<<"This book is not in list!"<<endl;
    else
        cout<<"This book is on "<<position<<endl;
}
void Booklist::find_binary(int ISBN)
{
    if(sorted==true)
    {
        int low = 0, high = counter - 1, mid=0;
        while (low <= high)			//binary search
        {
            mid = (low + high) / 2;
            if (book_list[mid] == ISBN)
                break;
            else
            {
                if (ISBN>book_list[mid])
                    low = mid + 1;
                if (ISBN<book_list[mid])
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
void Booklist::delete_item_position(int position)
{
    if (position >= counter||position<0)
        cout << "This book is not in the list!" << endl;
    else
    {
        for (int i = position; i != counter; i++)
        {
            book_list[i] = book_list[i+1];
        }
        counter--;
        book_list.pop_back();
    }

}
void Booklist::delete_item_isbn(int ISBN)
{
    int position = -1;

    for (int i = 0; i != counter; i++)
    {
        if (book_list[i] == ISBN)			//first, find the position of the book
        {
            position = i;
            break;
        }
    }
    if(position==-1)
        cout<<"This book isn't in list!"<<endl;
    else
    {
        for (int i = position; i != counter; i++)
        {
            book_list[i] = book_list[i+1];
        }
        counter--;
        book_list.pop_back();
    }
}
void Booklist::sort_list_selection()
{
    for (int j = 0; j != counter - 1; j++)
    {
        for (int i = j+1; i != counter; i++)
        {
            int t;

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
void Booklist::sorted_list_bubble()
{
    for (int i = counter - 1; i != 0; i--)
    {
        for (int j = 0; j != i; j++)
        {
            if (book_list[j]> book_list[j+1])
            {
                int t;
                t =book_list[j];
                book_list[j]= book_list[j+1];
                book_list[j+1]= t;

            }
        }
    }
    sorted=true;
}
void Booklist::Getcounter()
{
    cout<<"counter="<<counter<<endl;
}