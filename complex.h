#pragma once
#include <iostream>
using namespace std;

class Complex {
private:

    double im;
    double re;

public:
	Complex();
	Complex(double _re, double _im);
	Complex(const Complex& p);
	double GetRe();
	double GetIm();
	void SetRe(double _re);
	void SetIm(double _im);
	double GetModule();
	void ComplexPow(double x);
	void Trig();
	Complex operator + (Complex& p);
	Complex operator * (Complex& p);
	Complex operator / (Complex& p);
	Complex operator - (Complex& p);
	Complex operator = (const Complex& p);
	bool operator == (Complex& p);
	friend std::ostream& operator << (std::ostream& B, Complex& A);
	friend std::istream& operator >> (std::istream& B, Complex& A);

};