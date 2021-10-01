#ifndef MANCARE_H
#define MANCARE_H

#include <iostream>

class Mancare
{
private:
	double nutret;
	double graunte;
	double iarba;
public:
	Mancare();
	Mancare(double, double, double);
	~Mancare();
	double get_nutret() const;
	double get_graunte() const;
	double get_iarba() const;
};


#endif