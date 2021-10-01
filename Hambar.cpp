#include "Hambar.h"

Hambar::Hambar() :nr_animale(0)
{
}

Hambar::Hambar(const Hambar& obj)
{
	*this = obj;
}

Hambar& Hambar::operator=(const Hambar& obj)
{

	this->nr_animale = obj.nr_animale;
	return *this;
}

Hambar::~Hambar()
{
}

Hambar::Hambar(int nr) : nr_animale(nr)
{
}

ostream& operator<<(ostream& out, Hambar& obj)
{
	obj.afisare(out);
	return out;
}
