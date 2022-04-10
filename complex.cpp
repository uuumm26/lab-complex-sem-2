#pragma once

#include "Complex.h"
#include <iostream>
#include <math.h>

#define _USE_MATH_DEFINES


Complex::Complex()
{
	re = 0;
	im = 0;
}

Complex::Complex(double _re, double _im)
{
	re = _re;
	im = _im;
}

Complex::Complex(const Complex& p)
{
	re = p.re;
	im = p.im;
}

double Complex::GetRe()
{
	return re;
	return 0.0;
}

double Complex::GetIm()
{
	return im;
	return 0.0;
}

void Complex::SetRe(double _re)
{
	re = _re;
}

void Complex::SetIm(double _im)
{
	im = _im;
}

double Complex::GetModule()
{
	double mod;
	mod = pow((pow(re, 2) + pow(im, 2)), 0.5);
	return (mod);
}

void Complex::ComplexPow(double x)
{
	double argument = atan(im / re);
	double result = 0;
	if (x >= 1)
	{
		re = pow(GetModule(), x) * cos(x * argument);
		im = pow(GetModule(), x) * sin(x * argument);
	}
	else if (0 < x < 1)
	{
		double k = 1 / x;
		re = pow(GetModule(), x) * cos(argument / k);
		im = pow(GetModule(), x) * sin(argument / k);
	}
}

void Complex::Trig()
{
	double argument = atan(im / re);
	std::cout << GetModule() << " * (cos " << argument << ") + i * sin(" << argument << "))";
}

Complex Complex::operator+(Complex& p)
{
	Complex res;
	res.re = re + p.re;
	res.im = re + p.im;

	return res;
}

Complex Complex::operator*(Complex& p)
{
	Complex res;
	res.re = re * p.re - im * p.im;
	res.im = re * p.im - im * p.re;
	return res;
}

Complex Complex::operator/(Complex& p)
{
	Complex res;
	res.re = (re * p.re + im * p.im) * 1.0 / (p.re * p.re + p.im * p.im);
	res.im = (im * p.re - re * p.im) * 1.0 / (p.re * p.re + p.im * p.im);
	return res;
}

Complex Complex::operator-(Complex& p)
{
	Complex res;
	res.re = re - p.re;
	res.im = im - p.im;
	return res;
}

Complex Complex::operator=(const Complex& p)
{
	re = p.re;
	im = p.im;
	return*this;
}

bool Complex::operator==(Complex& p)
{
	if ((p.re == re) && (p.im = im))
	{
		return true;
	}
	return false;
}

std::ostream& operator<<(std::ostream& B, Complex& A)
{
	std::cout << A.re << " + " << A.im << "i" << std::endl;
	return B;
}

std::istream& operator>>(std::istream& B, Complex& A)
{
	B >> A.re;
	B >> A.im;
	return B;
}