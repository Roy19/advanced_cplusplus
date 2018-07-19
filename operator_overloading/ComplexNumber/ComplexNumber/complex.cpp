#include "complex.h"

complex::complex():real(0.0),imaginary(0.0) {}
complex::complex(double r,double i):real(r),imaginary(i){}
complex::complex(const complex &other) {
	this->real = other.real;
	this->imaginary = other.imaginary;
}

complex &complex::operator=(const complex &other) {
	this->real = other.real;
	this->imaginary = other.imaginary;

	return *this;
}

complex::~complex(){}

ostream &operator<< (ostream &out, const complex &c) {
	out << c.getReal() << "+i" << c.getImaginary();
	return out;
}