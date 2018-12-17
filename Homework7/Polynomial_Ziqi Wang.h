//
// Ziqi Wang 10.22
//

#ifndef HOMEWORK7_POLYNOMIAL_H
#define HOMEWORK7_POLYNOMIAL_H
#include<iostream>;
using namespace std;
class Polynomial
{
public:
    Polynomial();
    void Set_Polynomial();
    void Get_Polynomial(Polynomial &);
    Polynomial operator+(Polynomial &);
    Polynomial operator-(Polynomial &);
    Polynomial operator*(Polynomial &);
    Polynomial& operator=(Polynomial);
    Polynomial operator+=(Polynomial &);
    Polynomial operator-=(Polynomial &);
    Polynomial operator*=(Polynomial &);
    friend ostream &operator<<(ostream&, const Polynomial &);
    ~Polynomial();
private:
   float Poly_terms[13];
   int term_number;
    int validEntry(int x) const
    {
        return(x>=0&&x<=6);
    }
};
#endif //HOMEWORK7_POLYNOMIAL_H
