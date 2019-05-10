# Matrix 

## Create a Matrix class including following members
|Data members                |Description                                                             |
|----------------------------|:-----------------------------------------------------------------------|
|int n                       |- [x] Row of a matrix                                                   |
|int m                       |- [x] Column of a matrix                                                |
|float data[][]              |- [ ] Data of matrix                                                    |
|Matrix()                    |- [x] Construcror allows user to enter values for a matrix from keyboard|
|Matrix(int M, int N)        |- [x] Create M-by-N matrix of 0's                                       |
|Matrix(float a[][])         |- [ ] Create matrix based on 2d array                                   |
|Matrix(const Matrix &A)     |- [x] Copy constructor                                                  |
|Matrix operator+(Matrix &B) |- [x] Addition of two Matrices                                          |
|Matrix operator-(Matrix &B) |- [x] Subtraction of two Matrices                                       |
|int operator==(Matrix &B)   |- [x] Comparision of two Matrices                                       |
|Matrix operator*(Matrix &B) |- [x] Production of two Matrices                                        |
|display()                   |- [x] Print matrix                                                      |


