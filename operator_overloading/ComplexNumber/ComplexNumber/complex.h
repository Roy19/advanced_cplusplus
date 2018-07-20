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
	bool operator== (const complex &other) const;
	bool operator!= (const complex &other) const;
	~complex();
};
ostream& operator<< (ostream &out, const complex &c);
complex operator+ (const complex &c1, const complex &c2);
complex operator- (const complex &c1, const complex &c2);