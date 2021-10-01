#include "Ferma.h"

int main()
{
	Hambar** animale = new Hambar * [5];
	animale[0] = new Vaca(10);
	animale[1] = new Gaina(100);
	animale[2] = new Cal(2);
	animale[3] = new Porc(8);
	animale[4] = new Capra(4);


	Ferma obj(animale);
	obj.afisare_detalii();
	for (int i = 0; i < 5; ++i)
		delete animale[i];
	delete[] animale;

	return 1;
}