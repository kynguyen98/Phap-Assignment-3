#include <iostream>
class complex{
private:
double real,img;
public:
complex(double real=0,double img=0);
complex operator+(const complex&) const;
};
complex::complex(double r,double i){
	real=r;
	img=i;
}
complex complex::operator+ (const complex& c)const{
	complex result;
	result.real=(this->real+c.real);
	result.img=(this->img+c.img);
	return result;
}
int main(int argc, char *argv[]) {
	std::cout << "Hello Easy C++ project!" << std::endl;
	complex x(4,4);
	complex y(6,6);
	complex z=x+y;
	return 0;
}