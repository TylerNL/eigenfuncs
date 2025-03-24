#include <iostream>
#include <vector>
#include "matrix.h"

int main(){
    //Initializes matrix + resizes;
    Matrix matrix1;
    matrix1.getDim();
    matrix1.initMatrix();

    Matrix matrix2;
    matrix2.getDim();
    matrix2.initMatrix();

    Matrix matrix3 = matrix1 * matrix2;
    matrix3.printMatrix();

    return 0;
}