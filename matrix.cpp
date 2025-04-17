#include "matrix.h"

Matrix::Matrix(){
    nDim = 1;
    mDim = 1;
    myMatrix.resize(nDim);

    for(auto& row: myMatrix){
        row.resize(mDim);
    }
}

Matrix::Matrix(int row, int col){
    mDim = row;
    nDim = col;

    myMatrix.resize(nDim);

    for(auto& row: myMatrix){
        row.resize(mDim);
    }
}

Matrix Matrix::operator*(const Matrix& otherMatrix) const{ //3x2 2x3)
    if(mDim != otherMatrix.nDim) exit(EXIT_FAILURE);
    Matrix newMatrix(otherMatrix.mDim, nDim);
    for(int row = 0; row < nDim; row++){
        for(int col = 0; col < otherMatrix.mDim; col++){
            newMatrix.myMatrix[row][col] = 0;
            for(int i = 0; i < mDim; i++){
                newMatrix.myMatrix[row][col] += myMatrix[row][i] * otherMatrix.myMatrix[i][col];
            }
        }
    }
    return newMatrix;
}


Matrix Matrix::operator+(const Matrix& otherMatrix) const {
    if(nDim != otherMatrix.nDim || mDim != otherMatrix.mDim) exit(EXIT_FAILURE); //If dimensions aren't the same exit.
    Matrix output(nDim, mDim);
    for(int row = 0; row < nDim; row++){
        for(int col = 0; col < mDim; col++){
            output.myMatrix[row][col] = myMatrix[row][col] + otherMatrix.myMatrix[row][col];
        }
    }
    return output;
}

Matrix Matrix::operator-(const Matrix& otherMatrix) const {
    if(nDim != otherMatrix.nDim || mDim != otherMatrix.mDim) exit(EXIT_FAILURE); //If dimensions aren't the same exit.
    Matrix output(nDim, mDim);
    for(int row = 0; row < nDim; row++){
        for(int col = 0; col < mDim; col++){
            output.myMatrix[row][col] = myMatrix[row][col] - otherMatrix.myMatrix[row][col];
        }
    }
    return output;
}


void Matrix::getDim(){
    std::string input;
    std::cout << "Enter the dimensions of your matrix (nxm): ";
    std::cin >> input;
    size_t xPos = input.find('x');
    // Check if 'x' was found
    if (xPos != std::string::npos) {
        // Extract the parts before and after 'x'
        std::string nStr = input.substr(0, xPos);
        std::string mStr = input.substr(xPos + 1);
        
        // Convert strings to integers
        try {
            nDim = std::stoi(nStr);
            mDim = std::stoi(mStr);
            // Resize the matrix with the new dimensions
            matrixResize(nDim, mDim);
        } catch (const std::exception& e) {
            std::cerr << "Error parsing dimensions. Please try again.\n";
            getDim();
        }
    } else {
        std::cerr << "Invalid format. Please use format 'nxm'.\n";
        getDim();
    }

    myMatrix.resize(nDim);

    for(auto& row: myMatrix){
        row.resize(mDim);
    }
}

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

void printTemplate(int nDim ){
    std::cout << ' ';
    for(int i = 0; i < nDim; i++){
        std::cout << "--";
    }
    std::cout << '\n';
}

void Matrix::printMatrix(){
    std::cout << "\nYour matrix: \n";
    printTemplate(nDim);

    for(int row = 0; row < nDim; row++){
        std::cout << "|";
        for(int col = 0; col < mDim; col++){
            std::cout << myMatrix[row][col];
            if(col != mDim - 1) std::cout << "|";
        }
        std::cout << "|\n";
    }
    printTemplate(nDim);
}