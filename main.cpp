#include <iostream>
#include <vector>
#include "matrix.h"

int main(){
    int nDim = 0;
    int mDim = 0;
    //Gets nxm matrix of choice.
    std::cout << "Welcome. Enter the n dimension of your matrix: ";
    std::cin >> nDim;
    std::cout << "Now enter the m dimension: ";
    std::cin >> mDim;
    //Initializes matrix + resizes;
    Matrix myMatrix(nDim, mDim);
    myMatrix.initMatrix();

    myMatrix.printMatrix();

    return 0;
}