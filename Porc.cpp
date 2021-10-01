#include "Porc.h"

Porc::Porc():Hambar()
{
}

Porc::Porc(int nr_animale):Hambar(nr_animale)
{
}

Porc::Porc(const Porc& obj)
{
	*this = obj;
}

Porc::~Porc()
{
}

Porc& Porc::operator=(const Porc& obj)
{
	this->nr_animale = obj.nr_animale;
	return *this;
}

void Porc::afisare(ostream& out)
{
	out << "Animal: Porc, Numar animale: " << this->nr_animale << ", Mancare consumate de 1 animal(Kg) - Graunte: " << tip.get_graunte() << ", Iarba: " << tip.get_iarba() << endl;
}

double Porc::get_consum_nutret()
{
	return 0.0;
}

double Porc::get_consum_graunte()
{
	return nr_animale * tip.get_graunte();
}

double Porc::get_consum_iarba()
{
	return nr_animale * tip.get_iarba();
}

double Porc::get_total()
{
	return get_consum_graunte() + get_consum_iarba();
}

ostream& operator<<(ostream& out, Porc& obj)
{
	obj.afisare(out);
	return out;
}
