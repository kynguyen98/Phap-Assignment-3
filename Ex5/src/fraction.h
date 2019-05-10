#include<iostream>
class fraction{
    private:
    int numerator,dinominator;
    public:
    fraction(int r=0,int i=1);//default constructor
    fraction(const fraction &f);//copy constructor
    fraction operator+(const fraction&f)const;
    fraction operator-(const fraction&f)const;
    bool operator==(const fraction&f)const ;
    fraction operator*(const fraction&f)const;
    void display() const;
};