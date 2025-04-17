#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <limits>
#include <vector>

class Matrix{
    int nDim;
    int mDim;
    std::vector<std::vector<int>> myMatrix;
public:
    Matrix();
    Matrix(int n, int m);
    void matrixResize(int nRow, int mCol);
    void getDim();
    void initMatrix();
    void printMatrix();
    void findDeterminant();
    
    Matrix operator*(const Matrix& otherMatrix) const;
    Matrix operator-(const Matrix& otherMatrix) const;
    Matrix operator+(const Matrix& otherMatrix) const;
};


