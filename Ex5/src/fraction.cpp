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
    bool result=true;
    if (this->dinominator!=f.dinominator&&this->numerator!=f.numerator)
        return !result;
        else 
            return result ; 
}
void fraction::display()const{
    //int num=numerator;
    //int de=dinominator;
    std::cout<<numerator<<std::endl<<"--"<<std::endl<<dinominator<<std::endl;
}