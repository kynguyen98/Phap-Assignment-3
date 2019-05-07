#ifndef lab3_assigment_3
#define lab3_assignment_3
#include <iostream>
#include<vector>
#include<tuple>
#include<cmath>
#include<fstream>
#include<string>
#include<sstream>
#include<stdio.h>
#include<stdlib.h>
class Matrix{
private:
int row,columm;
std::vector<std::vector<float> >data;
public:
Matrix(int ,int, float);
Matrix(const char *);
Matrix(const Matrix &);
~Matrix();
//Matrix operations
Matrix operator+(Matrix &);
Matrix operator-(Matrix &);
Matrix operator*(Matrix &);
int operator ==(Matrix &);
Matrix transpose();
float& operator()(const int &,const int &);
void display() const;
int getrow() const;
int getcol() const;
std::tuple<Matrix, float, int> powerIter(int,float);
Matrix defflation(Matrix &, float&);
};
#endif