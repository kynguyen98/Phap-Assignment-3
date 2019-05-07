#include <iostream>
class complex{
private:
double real,img;
public:
complex(float real=0,float img=0);
complex operator+(const complex&) const;
complex operator-(const complex&) const;
complex operator*(const complex&) const;
complex operator==(const complex&) const;
void display() const;
};
complex::complex(float r,float i){
	real=r;
	img=i;
}
complex complex::operator+ (const complex& c)const{
	complex result;
	result.real=(this->real+c.real);
	result.img=(this->img+c.img);
	return result;
}
void complex::display()const{
std::cout<<"Here are the result:\n";
std::cout<<real<<"+"<<"("<<img<<"i)";
}
complex complex::operator-(const complex& c) const{
	complex result;
	result.real=(this->real-c.real);
	result.img=(this->img-c.img);
	return result;
}
complex complex::operator*(const complex& c)const{
	complex result;
	result.real=(this->real*c.real)-(this->img*c.img);
	result.img=(this->img*c.img)+(this->img*c.real);
	return result;
}
complex complex::operator==(const complex& c) const{
	complex result;
	result.real=(this->real==c.real);
	result.img=(this->img==c.img);
	return result;
}
int main(int argc, char *argv[]) {
	std::cout << "Hello Easy C++ project!" << std::endl;
	complex x(4,4);
	complex y(6,5);
	//complex a=x+y;
	//complex b=x-y;
	complex c=x*y;
	//complex e=x==y;
	c.display();
	return 0;
}