#ifndef COMPLEXMATRIX_HH
#define COMPLEXMATRIX_HH

#include <vector>
#include "ComplexVector.hh"

namespace ComplexSpace
{
    class ComplexMatrix 
    {
        private:
            /* Variables */
            // v[row][column]
            std::vector<ComplexVector> v;

            bool CheckDimension(ComplexMatrix A);
            bool IsSquare(ComplexMatrix A);

            // First vector is row
            int Row();
            // Second vector is column
            int Column();


        public:
            ComplexMatrix(int r, int c);
            ComplexMatrix(std::vector<ComplexVector> k);
            ~ComplexMatrix();

            ComplexMatrix Add(ComplexMatrix A);
            ComplexMatrix Multiplication(ComplexMatrix A);

            bool IsHermitian();

            ComplexMatrix TensorProduct(ComplexMatrix A);
            ComplexMatrix Conjugate();
            ComplexMatrix Transpose();
            ComplexMatrix Adjoint();
    };
}

#endif
