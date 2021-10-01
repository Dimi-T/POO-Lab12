#ifndef PORC_H
#define PORC_H

#include "Hambar.h"

class Porc :public Hambar
{
private:
	const Mancare tip = Mancare(0, 0.5, 0.625);
public:
	Porc();
	Porc(int);
	Porc(const Porc&);
	~Porc();
	Porc& operator=(const Porc&);
	friend ostream& operator<<(ostream&, Porc&);
	void afisare(ostream&);
	double get_consum_nutret();
	double get_consum_graunte();
	double get_consum_iarba();
	double get_total();
};

#endif
