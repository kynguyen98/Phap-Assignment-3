#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include"matrix.cpp"
int main(){
    matrix a(3,4);
    matrix b(3,4);
    matrix c=a+b;
    a==b;
    std::cout<<a<<std::endl;
    std::cout<<"---------------------"<<std::endl;
    std::cout<<b<<std::endl;
        std::cout<<"---------------------"<<std::endl;
    std::cout<<c<<std::endl;
        std::cout<<"---------------------"<<std::endl;
    std::cout<<std::endl;
    return 0;
}