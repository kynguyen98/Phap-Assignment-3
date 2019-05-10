#include <iostream>
#include"fraction.cpp"
int main(int argc, char *argv[]) {
	std::cout << "Hello Easy C++ project!" << std::endl;
	fraction f1(3,4);
	fraction f2(4,4);
	//fraction f3=f1+f2;
	fraction f4=f1==f2; 
	//f3.display();
	f4.display();
	return 0;
}