#include "Capra.h"

Capra::Capra():Hambar()
{
}

Capra::Capra(int nr_animale) : Hambar(nr_animale)
{
}

Capra::Capra(const Capra& obj)
{
	*this = obj;
}

Capra::~Capra()
{
}

Capra& Capra::operator=(const Capra& obj)
{
	this->nr_animale = obj.nr_animale;
	return *this;
}

void Capra::afisare(ostream& out)
{
	out << "Animal: Capra, Numar animale: " << nr_animale << ", Mancare consumate de 1 animal(Kg) - Nutret: " << tip.get_nutret() << endl;
}

double Capra::get_consum_graunte()
{
	return 0.0;
}

double Capra::get_consum_iarba()
{
	return 0.0;
}

double Capra::get_consum_nutret()
{
	return nr_animale * tip.get_nutret();
}

double Capra::get_total()
{
	return get_consum_nutret();
}

ostream& operator<<(ostream& out, Capra& obj)
{
	obj.afisare(out);
	return out;
}
