#include<iostream>
#include"matrix.cpp"
int main(int argc, char *argv[]){
    matrix a(3,4);
    matrix b(3,4);
    matrix c=a+b;
    std::cout<<a<<std::endl;
    std::cout<<"---------------------"<<std::endl;
    std::cout<<b<<std::endl;
        std::cout<<"---------------------"<<std::endl;
    std::cout<<c<<std::endl;
    return 0;
}