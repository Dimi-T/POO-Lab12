#ifndef VACA_H
#define VACA_H

#include "Hambar.h"

class Vaca :public Hambar
{
private:
	const Mancare tip = Mancare(3, 0, 0);
public:
	Vaca();
	Vaca(int);
	Vaca(const Vaca&);
	~Vaca();
	Vaca& operator=(const Vaca&);
	friend ostream& operator<<(ostream&, Vaca&);
	void afisare(ostream&);
	double get_consum_nutret();
	double get_consum_graunte();
	double get_consum_iarba();
	double get_total();
};



#endif
