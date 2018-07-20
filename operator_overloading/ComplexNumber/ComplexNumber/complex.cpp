#include "complex.h"

complex::complex():real(0.0),imaginary(0.0) {}

complex::complex(double r,double i):real(r),imaginary(i){}

complex::complex(const complex &other) {
	this->real = other.real;
	this->imaginary = other.imaginary;
}

complex& complex::operator=(const complex &other) {
	this->real = other.real;
	this->imaginary = other.imaginary;

	return *this;
}

bool complex::operator==(const complex & other) const
{
	return real == other.real && imaginary == other.imaginary;
}

bool complex::operator!=(const complex & other) const
{
	return !(*this == other);
}

complex operator+(const complex & c1, const complex & c2)
{
	return complex(c1.getReal() + c2.getReal(),
		c1.getImaginary() + c2.getImaginary());
}

complex operator-(const complex & c1, const complex & c2)
{
	return complex(c1.getReal() - c2.getReal(),
		c1.getImaginary() - c2.getImaginary());
}

complex::~complex(){}

ostream& operator<< (ostream &out, const complex &c) {
	out << c.getReal() << "+i" << c.getImaginary();
	return out;
}