#include "Cal.h"

Cal::Cal():Hambar()
{
}

Cal::Cal(int nr_animale):Hambar(nr_animale)
{
}

Cal::Cal(const Cal& obj)
{
	*this = obj;
}

Cal::~Cal()
{
}

Cal& Cal::operator=(const Cal& obj)
{
	this->nr_animale = obj.nr_animale;
	return *this;
}

void Cal::afisare(ostream& out)
{
	out << "Animal: Cal, Numar animale: " << this->nr_animale << ", Mancare consumate de 1 animal(Kg) - Nutret: " << tip.get_nutret() << endl;
}

double Cal::get_consum_graunte()
{
	return 0.0;
}

double Cal::get_consum_iarba()
{
	return 0.0;
}

double Cal::get_consum_nutret()
{
	return nr_animale * tip.get_nutret();
}

double Cal::get_total()
{
	return get_consum_nutret();
}

ostream& operator<<(ostream& out, Cal& obj)
{
	obj.afisare(out);
	return out;
}
