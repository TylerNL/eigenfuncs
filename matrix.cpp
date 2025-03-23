#include "matrix.h"



void Matrix::matrixResize(int nRow, int mCol){
    myMatrix.resize(nRow);

    for(auto& row: myMatrix){
        row.resize(mCol);
    }
}

void Matrix::initMatrix(){
    for(int row = 0; row < nDim; row++){
        for(int col = 0; col < mDim; col++){
            int num;
            std::cout << "Enter num (left to right): \n";
            std::cin >> num;
            myMatrix[row][col] = num;
        }
    }
}

void Matrix::printMatrix(){
    for(int row = 0; row < nDim; row++){
        for(int col = 0; col < mDim; col++){
            std::cout << myMatrix[row][col] << ' ';
        }
        std::cout << '\n';
    }
}