#include <iostream>
#include <vector>
#include "matrix.h"

void matrixMultiplication(){
    Matrix matrix1;
    matrix1.getDim();
    matrix1.initMatrix();

    Matrix matrix2;
    matrix2.getDim();
    matrix2.initMatrix();

    Matrix matrix3 = matrix1 * matrix2;
    matrix3.printMatrix();
}

int main(){
    //Initializes matrix + resizes;
    std::cout << "What option would you like to do today? '\n' 1. Matrix multiplication'\n' 2. Find a determinant\n";
    int userDecision;
    std::cin >> userDecision;

    if(userDecision == 1)
        matrixMultiplication();
    else if(userDecision == 2)
        return -1;
    

    return 0;
}