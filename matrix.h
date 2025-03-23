#include <iostream>
#include <vector>

class Matrix{
    int nDim;
    int mDim;
    std::vector<std::vector<int>> myMatrix;
public:
    Matrix() : nDim(0), mDim(0), myMatrix(0, std::vector<int>(0)) {}
    Matrix(int n, int m) : nDim(n), mDim(m), myMatrix(n, std::vector<int>(m)) {}
    void matrixResize(int nRow, int mCol);
    void initMatrix();
    void printMatrix();
};


