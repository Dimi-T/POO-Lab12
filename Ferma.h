#ifndef FERMA_H
#define FERMA_H

#include "Animale.h"

class Ferma
{
private:
	Hambar** v;
	const int capacitate = 2000;
	double* cant = new double[3];
	double zile = 0;
	double get_consum();
	void management(double* cant);
	void sortare_consumatori();
public:
	Ferma();
	Ferma(Hambar**);
	~Ferma();
	void afisare_detalii();
};

#endif
