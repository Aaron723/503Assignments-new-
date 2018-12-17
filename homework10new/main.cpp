//Ziqi Wang 11.15
#include "list.h"
int main() {
    int i=0,number;
    string Str;
    LinkedList shoplist_1;
    while(i!=8)
    {//list choices of system
        cout<<"Welcome to the shopping list program\n"
              "Please choose an option:\n";
        cout<<"1.  Add a new node at the beginning\n"
              "2.  Add a new node at the end\n"
              "3.  Remove the beginning node\n"
              "4.  Remove the end node\n"
              "5.  Remove a node from the list by entering an item number\n"
              "6.  Remove a node from the list by entering an item Str\n"
              "7.  Print out the list\n"
              "8.  Quit the program"<<endl;
        cin>>i;
        switch(i)
        {
            case 1:
            {
                cout<<"Please enter product number to insert at beginning\n";
                cin>>number;
                cout<<"Please enter the Str for the product\n";
                cin>>Str;
                Node *newNode1=new Node(Str,number);
                shoplist_1.addToStart(newNode1);
                shoplist_1.printList();
                break;

            }

            case 2:
            {
                cout<<"Please enter product number to insert at end\n";
                cin>>number;
                cout<<"Please enter the Str for the product\n";
                cin>>Str;
                Node *newNode2=new Node(Str,number);
                shoplist_1.addToEnd(newNode2);
                shoplist_1.printList();
                break;
            }

            case 3:
                if(shoplist_1.removeFromStart())
                {
                    cout<<"remove successfully!\n";
                    shoplist_1.printList();//after evey choice, print list
                }
                break;
            case 4:
                if(shoplist_1.removeFromEnd())
                {
                    cout<<"remove successfully!\n";
                    shoplist_1.printList();
                }
                break;
            case 5:
            {
                cout<<"Please enter the itemNo you want to remove\n";
                cin>>number;
                shoplist_1.removeNodeFromList(number);
                shoplist_1.printList();
                break;
            }

            case 6:
            {
                cout<<"Please enter the itemName you want to remove\n";
                cin>>Str;
                shoplist_1.removeNodeFromList(Str);
                shoplist_1.printList();
                break;
            }

            case 7:
                shoplist_1.printList();
                break;
            case 8:
                shoplist_1.printList();
                cout<<"Quite the system now"<<endl;
                break;
            default:
                cout<<"This option isn't available"<<endl;

        }
    }
    return 0;
}