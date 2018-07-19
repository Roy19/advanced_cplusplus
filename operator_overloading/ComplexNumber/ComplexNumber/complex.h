#pragma once
#include <iostream>
using namespace std;

class complex
{
	double real;
	double imaginary;
public:
	complex();
	complex(double r, double i);
	complex(const complex &other);

	double getReal() const {
		return real;	// doesn't modify anything
	}
	double getImaginary() const {
		return imaginary;	// doesn't modify anything
	}

	complex &operator= (const complex &other);
	//complex &operator+ (const complex &other);
	//complex &operator- (const complex &other);
	~complex();
};
ostream &operator<< (ostream &out, const complex &c);
