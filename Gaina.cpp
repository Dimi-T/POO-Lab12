#include "Gaina.h"

Gaina::Gaina():Hambar()
{
}

Gaina::Gaina(int nr_animale):Hambar(nr_animale)
{
}

Gaina::Gaina(const Gaina& obj)
{
	*this = obj;
}

Gaina::~Gaina()
{
}

Gaina& Gaina::operator=(const Gaina& obj)
{
	this->nr_animale = obj.nr_animale;
	return *this;
}

void Gaina::afisare(ostream& out)
{
	out << "Animal: Gaina, Numar animale: " << this->nr_animale << ", Mancare consumate de 1 animal(Kg) - Graunte: " << tip.get_graunte() << endl;
}

double Gaina::get_consum_nutret()
{
	return 0.0;
}

double Gaina::get_consum_iarba()
{
	return 0.0;
}

double Gaina::get_consum_graunte()
{
	return nr_animale * tip.get_graunte();
}

double Gaina::get_total()
{
	return get_consum_graunte();
}

ostream& operator<<(ostream& out, Gaina& obj)
{
	obj.afisare(out);
	return out;
}
