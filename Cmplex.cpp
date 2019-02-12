#include "Cmplex.h"
#include <iostream>

using namespace std;

Cmplex::Cmplex(const double A, const double B):r(A),i(B){};
Cmplex::Cmplex(Cmplex &c):r(c.r),i(c.i){};
Cmplex::~Cmplex(){};

double Cmplex::getreal( Cmplex &c) 
       { return r;
       }

double Cmplex::getimag( Cmplex &c) 
        { return i;
       }

double Cmplex::argument (Cmplex &c)
     { return (r*i);
       
     }
Cmplex & Cmplex::operator = (Cmplex &c)
     {
        r=c.r;
        i=c.i;
        return *this;
     }

std::ostream & operator << (std::ostream & o,  Cmplex & c) {
    if(c.getimag(c) == 0) {
        return o << c.getreal(c);
    }
    else {
        return o << "(" << c.getreal(c) << ", " << c.getimag(c) << "i)";
    }
    
    
    
}