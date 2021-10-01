#include "Vaca.h"

Vaca::Vaca() :Hambar()
{
}

Vaca::Vaca(int nr_animale):Hambar(nr_animale)
{
}

Vaca::Vaca(const Vaca& obj)
{
	*this = obj;
}

Vaca::~Vaca()
{
}

Vaca& Vaca::operator=(const Vaca& obj)
{
	this->nr_animale = obj.nr_animale;
	return *this;
}

void Vaca::afisare(ostream& out)
{
	out << "Animal: Vaca, Numar animale: " << this->nr_animale << ", Mancare consumata de 1 animal(kg) - Nutret: " << tip.get_nutret() << endl;
}

double Vaca::get_consum_nutret()
{
	return nr_animale * tip.get_nutret();
}

double Vaca::get_consum_graunte()
{
	return 0.0;
}

double Vaca::get_consum_iarba()
{
	return 0.0;
}

double Vaca::get_total()
{
	return get_consum_nutret();
}

ostream& operator<<(ostream& out, Vaca& obj)
{
	obj.afisare(out);
	return out;
}
