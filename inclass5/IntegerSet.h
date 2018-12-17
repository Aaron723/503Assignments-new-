//Ziqi Wang 10.20

//Header file for class IntergerSet

#ifndef INCLASS5_INTERGERSET_H
#define INCLASS5_INTERGERSET_H

class IntegerSet
{
public:
    IntegerSet();//constructor
    void inputSet();
    void printSet() const;
    IntegerSet UnionOfSet(IntegerSet);
    IntegerSet IntersectionOfSet(IntegerSet);

private:
    int set[101];
    int validEntry(int x) const
    {
        return(x>=0&&x<=100);
    }//end function validEntry

};

#endif //INCLASS5_INTERGERSET_H
