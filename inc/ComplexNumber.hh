#ifndef COMPLEXNUMBER_HH
#define COMPLEXNUMBER_HH

#include <string>
#include <cmath>

namespace ComplexSpace
{
    class ComplexNumber 
    {
        private:
            float real;
            float imaginary;
            int exponent;


    public:
 
            ComplexNumber(float r=0, float i=0);
            ~ComplexNumber();

            ComplexNumber Add(ComplexNumber x);
            ComplexNumber Product(ComplexNumber x);

            float Modulus();
            ComplexNumber Conjugate();
    };
}

#endif
