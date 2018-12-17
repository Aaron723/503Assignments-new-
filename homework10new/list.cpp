//
// Ziqi Wang 11.15
//

#include "list.h"
#include <iomanip>
LinkedList::LinkedList() {
    myHead=NULL;
    myTail=NULL;
    mySize=0;
}
void LinkedList::addToStart(Node *NewNode) {
    if(mySize==0)
    {
        myHead=NewNode;
        myTail=NewNode;
        mySize++;
    }
    else
    {
        NewNode->next=myHead;
        myHead=NewNode;
        mySize++;
    }


}
void LinkedList::addToEnd(Node *NewNode)
{
    if(mySize==0)
    {
        myHead=NewNode;
        myTail=NewNode;
        mySize++;
    }
    else
    {
        myTail->next=NewNode;
        myTail=NewNode;
        mySize++;
    }

}
void LinkedList::printList() {
    if(mySize==0)//special situation
        cout<<"Shoplist is empty!"<<endl;
    else
    {
        Node *currentNode=myHead;
        int current=0;
        while(currentNode!=NULL)
        {
            cout<<"ItemNo"<<setw(9)<<"ItemName"<<endl;
            cout<<currentNode->itemNo<<setw(7)<<currentNode->itemName<<endl;
            currentNode=currentNode->next;
            current++;
        }
    }
}
bool LinkedList::removeFromStart() {
    if(mySize==0)//special situation
    {
        cout<<"Shoplist is empty, can't remove any item!"<<endl;
        return false;
    }
    else
    {
        Node *temNode=myHead;
        myHead=myHead->next;
        delete temNode;
        mySize--;
        return true;
    }


}
bool LinkedList::removeFromEnd() {
    if(mySize==0)//special situation
    {
        cout<<"Shoplist is empty, can't remove any item!"<<endl;
        return false;
    }
    else
    {
        Node *temNode=myHead;
        while(temNode->next!=myTail&&mySize!=1)
            temNode=temNode->next;
        if(mySize==1)//when there is only one node, head and tail point to the only nodes, so it's a special situation too.
        {
            mySize--;
            delete temNode;
            return true;
        }
        myTail=temNode;
        temNode=temNode->next;
        delete temNode;
        mySize--;
        myTail->next=NULL;
        return true;
    }
}
void LinkedList::removeNodeFromList(int target) {
    bool flag=false;
    if(mySize==0)
        cout<<"Shoplist is empty, can't remove any item!"<<endl;
    else
    {
        Node *currentNode;
        currentNode=myHead;
        if(currentNode->itemNo==target)
        {
            myHead=myHead->next;
            delete currentNode;
            mySize--;
            cout<<"Remove successfully!"<<endl;
            flag=true;
        }
        else
        {
            int counter;
            for(counter=1;counter<mySize;counter++)
            {
                if((currentNode->next)->itemNo==target)
                {
                    Node *s=currentNode->next;
                    currentNode->next=s->next;
                    delete s;
                    mySize--;
                    cout<<"Remove successfully!"<<endl;
                    flag=true;
                    break;
                }
                else
                    currentNode=currentNode->next;
            }
            if(!flag)
            cout<<"Item Not Found"<<endl;

        }

    }
}
void LinkedList::removeNodeFromList(string item) {
    bool flag=false;
    if(mySize==0)
        cout<<"Shoplist is empty, can't remove any item!"<<endl;
    else
    {
        Node *currentNode;
        currentNode=myHead;
        if(currentNode->itemName==item)
        {
            myHead=myHead->next;
            delete currentNode;
            mySize--;
            flag=true;
            cout<<"Remove successfully!"<<endl;
        }
        else
        {
            int counter;
            for(counter=1;counter<mySize;counter++)
            {
                if((currentNode->next)->itemName==item)
                {
                    Node *s=currentNode->next;
                    currentNode->next=s->next;
                    delete s;
                    mySize--;
                    cout<<"Remove successfully!"<<endl;
                    flag= true;
                    break;
                }
                else
                    currentNode=currentNode->next;
            }
            if(!flag)
            cout<<"Item Not Found"<<endl;

        }

    }
}
LinkedList::~LinkedList() {
    if(mySize!=0)
    {
        cout<<"Destroying items..."<<endl;
        Node *currentNode=myHead;
        Node *temNode;
        while(currentNode!=NULL)
        {
            temNode=currentNode;
            currentNode=currentNode->next;
            myHead=currentNode;
            delete temNode;
        }
    }
    cout<<"All items destroyed"<<endl;
    mySize=0;
}
