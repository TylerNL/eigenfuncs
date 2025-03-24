# Matrix Operations Library

A C++ library for performing fundamental matrix operations with a focus on linear algebra computations.

## Features

Currently implemented:
- Matrix creation and initialization
- Basic matrix operations:
  - Addition
  - Subtraction
  - Multiplication
- Matrix display and formatting

Coming soon:
- Eigenvalue calculation
- Eigenvector determination
- Matrix inversion
- Determinant calculation
- LU Decomposition

## Getting Started

### Prerequisites

- C++ compiler with C++17 support
- Make (for building with the provided Makefile)

### Building the Project

Clone this repository:
```
git clone https://github.com/TylerNL/eigenfuncs.git
cd matrix-operations
```

Compile using the included Makefile:
```
make
```

Run the program:
```
./matrix
```

## Usage Examples

```cpp
// Create matrices
Matrix A(3, 3);
Matrix B(3, 3);

// Initialize matrices
A.initMatrix();  // Prompts for user input
B.initMatrix();  // Prompts for user input

// Perform operations
Matrix C = A + B;  // Addition
Matrix D = A - B;  // Subtraction
Matrix E = A * B;  // Multiplication

// Display results
C.printMatrix();
```

## Project Structure

- `matrix.h` - Matrix class declaration
- `matrix.cpp` - Matrix class implementation
- `main.cpp` - Example program using the Matrix class
- `Makefile` - Build configuration

## Implementation Details

The Matrix class uses a vector of vectors (`std::vector<std::vector<int>>`) for internal representation, providing flexibility for matrix resizing and operations.

```cpp
class Matrix {
    int nDim;
    int mDim;
    std::vector<std::vector<int>> myMatrix;
public:
    // Methods for matrix operations
    // ...
};
```

## Future Development

Future versions will implement eigenvalue and eigenvector calculations using:
- Power Method
- QR Algorithm
- Jacobi Method

Additional planned features include:
- Support for floating-point matrices
- Matrix factorization methods
- Performance optimizations for large matrices

## Contributing

Contributions are welcome! Please feel free to submit a Pull Request.

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments

- This project was inspired by coursework in linear algebra and numerical methods
- References include "Numerical Linear Algebra" by Trefethen and Bau
