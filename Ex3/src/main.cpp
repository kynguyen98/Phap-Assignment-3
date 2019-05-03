#include <iostream>
#include<vector>
#include<tuple>
#include<cmath>
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
double& operator()(const int &,const int &);
void display() const;
int getrow() const;
int getcol() const;
std::tuple<Matrix, float, int> powerIter(int,float);
Matrix defflation(Matrix &, float&);
};
int main(int argc, char *argv[]) {
	std::cout << "Hello Easy C++ project!" << std::endl;
	return 0;
}