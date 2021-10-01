#ifndef CAL_H
#define CAL_H

#include "Hambar.h"

class Cal :public Hambar
{
private:
	const Mancare tip = Mancare(4, 0, 0);
public:
	Cal();
	Cal(int);
	Cal(const Cal&);
	~Cal();
	Cal& operator=(const Cal&);
	friend ostream& operator<<(ostream&, Cal&);
	void afisare(ostream&);
	double get_consum_nutret();
	double get_consum_graunte();
	double get_consum_iarba();
	double get_total();

};


#endif
