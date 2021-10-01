#ifndef CAPRA_H
#define CAPRA_H

#include "Hambar.h"

class Capra :public Hambar
{
private:
	const Mancare tip = Mancare(1, 0, 0);
public:
	Capra();
	Capra(int);
	Capra(const Capra&);
	~Capra();
	Capra& operator=(const Capra&);
	friend ostream& operator<<(ostream&, Capra&);
	void afisare(ostream&);
	double get_consum_nutret();
	double get_consum_graunte();
	double get_consum_iarba();
	double get_total();
};


#endif