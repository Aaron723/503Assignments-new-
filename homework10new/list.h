//
// Ziqi Wang 11.15
//
#include <iostream>
#include <string>
using namespace std;
#ifndef HOMEWORK10NEW_SHOPLIST_H
#define HOMEWORK10NEW_SHOPLIST_H
class Node{// define nodes in the linked list
    friend class LinkedList;
public:
    Node(string& name, int no)
            :itemName(name), itemNo(no)
    {
        this->next=NULL;
    }
private://property of nodes
    string itemName;
    int itemNo;
    Node *next;

};
class LinkedList{//define linked list(shop list)
public:
    LinkedList();//constructor

    virtual ~LinkedList();//destructor
    void addToStart(Node *);
    void addToEnd(Node *);
    void printList();
    bool removeFromStart();
    bool removeFromEnd();
    void removeNodeFromList(int);
    void removeNodeFromList(string);
private:
    Node *myHead;
    Node *myTail;
    int mySize;//current size of list
};

#endif //HOMEWORK10NEW_SHOPLIST_H
