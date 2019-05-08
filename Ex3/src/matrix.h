#ifndef ____Phap_Assigment_3___Matrix
#define ____Phap_Assigment_3___Matrix
#include<iostream>
#include<iomanip>
#include<stdio.h>
typedef float matrixdata;
class matrix{
friend std::ostream &operator<< (std::ostream &out, matrix &output);
private:
int row,col;
matrixdata **data;
public:
void display() const;
//constructor
matrix (int rownum,int colnum);
//copy constructor
matrix (const matrix& m);
//destructor
~matrix();
matrix operator+(matrix &m);
matrix operator-(matrix &m);
matrix operator*(matrix &m);

};
#endif