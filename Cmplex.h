#include <iostream>
#ifndef CMPLEX_H
#define CMPLEX_H

using namespace std;
class Cmplex
{
public:
    Cmplex(double A=0., double B=0.); //Constructor with two parameters, real and imag. 
    Cmplex(Cmplex &c);

    ~Cmplex(); //Deconstructor 
    
    double getreal( Cmplex &c) ;
    double getimag( Cmplex &c) ;
    double argument (Cmplex &c);
    
    Cmplex & operator = (Cmplex &c);


    
private:
    double r;
    double i;

};

//<< operator, outside class (only inside class if operates with same class)
std::ostream & operator << (std::ostream & o,  Cmplex & c);

#endif // CMPLEX_H
