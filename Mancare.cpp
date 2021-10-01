#include "Mancare.h"

Mancare::Mancare():nutret(0),graunte(0),iarba(0)
{
}

Mancare::Mancare(double nt, double gr, double ib):nutret(nt), graunte(gr), iarba(ib)
{
}

Mancare::~Mancare()
{
}

double Mancare::get_nutret() const
{
	return nutret;
}

double Mancare::get_graunte() const
{
	return graunte;
}

double Mancare::get_iarba() const
{
	return iarba;
}
