#ifndef HAMBAR_H
#define HAMBAR_H

#include<iostream>
#include<cmath>
#include<cstring>
#include "Mancare.h"
using namespace std;

class Hambar
{
protected:
	int nr_animale;
public:
	Hambar();
	Hambar(int);
	Hambar(const Hambar&);
	virtual ~Hambar() = 0;
	virtual Hambar& operator=(const Hambar&);
	friend ostream& operator<<(ostream&, Hambar&);
	virtual void afisare(ostream&) = 0;
	virtual double get_consum_nutret() = 0;
	virtual double get_consum_graunte() = 0;
	virtual double get_consum_iarba() = 0;
	virtual double get_total() = 0;
};



#endif