#include "Booklist.h"
//Ziqi Wang 11.27
int main() {
    int i=10;
    Booklist<string> Book_List;
    string name;
    int position;
    while(i!=0)
    {
        //ask users to input their choice, if they input 0, quit.
        cout << "Choice1, insert a new book at the end\n" << "Choice2, insert a book in the certain position\n" << "Choice3, find a book(unsorted)\n"
             << "Choice4, sort the list and find a book\n" << "Choice5, delete a book in a certain position\n" << "Choice6, delete a book using name\n"
             << "Choice7, sort the list(selection sort)\n"<< "Choice8, Sort the list(bubble sort)\n" <<"Choice9, Print the list\n"
             <<"when you enter 0, quit"<<endl;
        cin >> i;
        //NOTICE: The position start from 0, and counter represent the number of book.
        switch (i)
        {
            case 1:
            {

                cout<<"Please enter the name of the book"<<endl;
                cin>>name;
                Book_List.insert(name);
                Book_List.Print();
                Book_List.Getcounter();
                break;
            }
            case 2:
            {
                cout<<"Please enter the position you want to enter and name"<<endl;
                cin>>position>>name;
                Book_List.insert_certain(position,name);
                Book_List.Print();
                Book_List.Getcounter();
                break;
            }
            case 3:
            {
                cout<<"Please enter the name"<<endl;
                cin>>name;
                Book_List.find_linear(name);
                break;
            }
            case 4:
            {
                cout<<"Please enter the name"<<endl;
                cin>>name;
                Book_List.find_binary(name);
                break;
            }
            case 5:
            {
                cout<<"Please enter the position of the book"<<endl;
                cin>>position;
                Book_List.delete_item_position(position);
                Book_List.Print();
                Book_List.Getcounter();
                break;
            }
            case 6:
            {
                cout<<"Please enter the name"<<endl;
                cin>>name;
                Book_List.delete_item_name(name);
                Book_List.Print();
                Book_List.Getcounter();
                break;
            }
            case 7:
            {
                Book_List.sort_list_selection();
                Book_List.Print();
                break;
            }
            case 8:
            {
                Book_List.sorted_list_bubble();
                Book_List.Print();
                break;
            }
            case 9:
            {
                Book_List.Print();
                Book_List.Getcounter();
                break;
            }
            case 0:
                break;
            default:
                cout << "It's not available!" << endl;
        }
    }
    return 0;
}