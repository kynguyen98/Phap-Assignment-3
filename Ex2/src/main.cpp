#include <iostream>
class Real{ 
private:
float value;
public:
Real(float v=0);
void display() const;
Real operator*(Real &A){
	float temp;
	temp=(this->value*A.value);
	return Real(temp);
}
Real operator/(Real &A){
	float temp;
	temp=(this->value/A.value);
	return Real(temp);
}
Real operator-(Real &A){
	float temp;
	temp=(this->value-A.value);
	return Real(temp);
}
};
Real::Real(float v){
	value=v;
}
void Real::display() const{
	std::cout<<"Here is the result: "<<value;
}
int main() {
	std::cout << "Hello Easy C++ project!" << std::endl;
	Real A(6.5);
	Real B(4.7);
	//Real C=A*B;
	//Real C=A/B;
	Real C=A-B;
	C.display();
	//getchar(); dont know why lab2 put get getch() at the end of the code why put it? 
	//we execute the code then when its finish it exist the program thats all, no need for user input 
	return 0;
}