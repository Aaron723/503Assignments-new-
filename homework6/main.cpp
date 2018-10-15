
//Ziqi Wang
#include <iostream>
#include"Booklist_lastName.h"
using namespace std;
int main()
{
    int i = 6;//		initialize a counter to record the length of array, i is the choice user want to put
    Booklist Book_List;

    while (i != 0)
    {
        //ask users to input their choice, if they input 0, quit.
        cout << "Choice1, insert a new book at the end\n" << "Choice2, insert a book in the certain position\n" << "Choice3, find a book(unsorted)\n"
             << "Choice4, sort the list and find a book\n" << "Choice5, delete a book in a certain position\n" << "Choice6, delete a book using ISBN\n"
             << "Choice7, sort the list(selection sort)\n"<< "Choice8, Sort the list(bubble sort)\n" <<"when you enter 0, quit\n"<< endl;

        cin >> i;

        switch (i)
        {
            case 1:

                int ISBN1;

                cout << "Please enter the ISBN number of the book you want to buy" << endl;

                cin >> ISBN1;
                Book_List.insert(ISBN1);	//insert a book to the end of the list
                Book_List.Print();
                Book_List.Getcounter();
                break;
            case 2:
                int ISBN2;
                int position2;			//the position user want to put this book
                cout << "Please enter the position you want to insert and ISBN" << endl;
                cin >> position2 >> ISBN2;
                Book_List.insert_certain(position2, ISBN2);
                Book_List.Print();
                Book_List.Getcounter();
                break;
            case 3:			//use binary search to search a book in the list(using ISBN number) and output the position of the book, if the book isn't in the list, output error.
                int ISBN3;
                cout << "Please enter the ISBN number" << endl;
                cin >> ISBN3;
                Book_List.find_linear(ISBN3);
                break;

            case 4:			/*using binary search to find a book in a sorted list, and output the position of the book, if the list isn't sorted or the book isn't in the list
						output error*/
                int ISBN4;
                cout << "Please enter the ISBN number" << endl;
                cin >> ISBN4;
                Book_List.find_binary(ISBN4);
                break;
            case 5:			//delete a book using it's position, after that, print booklist.
                int position5;
                cout << "Please enter the position of the book" << endl;
                cin >> position5;

                Book_List.delete_item_position(position5);
                Book_List.Print();
                Book_List.Getcounter();
                break;
            case 6:			//delete a book using it's ISBN number, after that, print booklist.
                int ISBN6;
                cout << "Please enter the ISBN number" << endl;
                cin >> ISBN6;
                Book_List.delete_item_isbn(ISBN6);
                Book_List.Print();
                Book_List.Getcounter();
                break;
            case 7:			//sort booklist using selection, after that, print booklist
                Book_List.sort_list_selection();
                Book_List.Print();
                break;
            case 8:			//sort booklist using bubbling, after that, print booklist
                Book_List.sorted_list_bubble();
                Book_List.Print();
                break;
            case 0:
                break;

            default:
                cout << "It's not available!" << endl;
        }

    }
    return 0;
}