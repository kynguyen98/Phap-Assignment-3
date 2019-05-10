#include <iostream>
#include "fraction.h"
fraction::fraction(int num,int de){
    numerator=num;
    dinominator=de;
}
fraction::fraction (const fraction &f){
    numerator=f.numerator;
    dinominator=f.dinominator;
}
fraction fraction::operator+ (const fraction&f)const{
    fraction result;
    result.numerator=(this->numerator*f.dinominator)+(f.numerator*this->dinominator);
    result.dinominator=(this->dinominator*f.numerator)+(f.dinominator*this->numerator);
    return result;
}
fraction fraction::operator- (const fraction&f)const{
    fraction result;
    result.numerator=(this->numerator*f.dinominator)-(f.numerator*this->dinominator);
    result.dinominator=(this->dinominator*f.numerator)-(f.dinominator*this->numerator);
    return result;
}
fraction fraction::operator*(const fraction &f)const{
    fraction result;
    result.numerator=this->numerator*f.numerator;
    result.dinominator=this->dinominator*f.dinominator;
    return result;
}
bool fraction::operator==(const fraction &f) const{
    float fraction1,fraction2;
    fraction1=numerator*f.dinominator;
    fraction2=dinominator*f.numerator;
    return (fraction1==fraction2);
}
void fraction::display()const{
    //int num=numerator;
    //int de=dinominator;
    std::cout<<numerator<<std::endl<<"--"<<std::endl<<dinominator<<std::endl;
}