//
// Created by Zi Wan on 10/12/18.
//Declarition of class and prototypes of member function;

#ifndef HOMEWORK6_BOOKLIST_LASTNAME_H
#define HOMEWORK6_BOOKLIST_LASTNAME_H
#include<vector>

using namespace std;
class Booklist{
public:
    Booklist();
    ~Booklist();
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
    int max_size;
    int counter;
    vector<int> book_list;
    bool sorted;
};
#endif //HOMEWORK6_BOOKLIST_LASTNAME_H
