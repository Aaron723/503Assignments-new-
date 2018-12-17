//Ziqi Wang 10.14 homework6
//Declarition of class and prototypes of member function;

#ifndef HOMEWORK6_BOOKLIST_LASTNAME_H
#define HOMEWORK6_BOOKLIST_LASTNAME_H
#include<vector>

using namespace std;
class Booklist{
public:
    Booklist();//constructor(because I need to give some specific initial number to the members)
    ~Booklist();//destructor(because I use vector, so I need to clear the elements in vector)
    void insert(int);
    void Print();
    void insert_certain(int, int);
    void find_linear(int);
    void find_binary(int);
    void delete_item_position(int);
    void delete_item_isbn(int);
    void sort_list_selection();
    void sorted_list_bubble();
    void Getcounter();
private:
    int max_size;//define the max size of booklist
    int counter;//get the current length of booklist
    vector<int> book_list;//define a vector to store the ISBN
    bool sorted;
};
#endif //HOMEWORK6_BOOKLIST_LASTNAME_H
