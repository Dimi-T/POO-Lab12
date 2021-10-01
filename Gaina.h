#ifndef GAINA_H
#define GAINA_H

#include "Hambar.h"

class Gaina :public Hambar
{
private:
	const Mancare tip = Mancare(0, 0.05, 0);
public:
	Gaina();
	Gaina(int);
	Gaina(const Gaina&);
	~Gaina();
	Gaina& operator=(const Gaina&);
	friend ostream& operator<<(ostream&, Gaina&);
	void afisare(ostream&);
	double get_consum_graunte();
	double get_consum_nutret();
	double get_consum_iarba();
	double get_total();
};


#endif