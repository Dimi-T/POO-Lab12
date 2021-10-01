#include "Ferma.h"

double Ferma::get_consum()
{
    cant[0] = 0;
    cant[1] = 0;
    cant[2] = 0;
    Hambar* temp = v[0];
    for (int i = 0; i < 5; ++i)
    {
        temp = v[i];
        cant[0] = cant[0] + temp->get_consum_nutret();
        cant[1] = cant[1] + temp->get_consum_graunte();
        cant[2] = cant[2] + temp->get_consum_iarba();
    }

    return cant[0] + cant[1] + cant[2];
}

void Ferma::management(double* cant)
{
    double total = get_consum();
    cant[0] = (double)cant[0] / total*2000;
    cant[1] = floor((double)cant[1] / total * 2000);
    cant[2] = ceil((double)cant[2] / total * 2000);

    zile = floor((double)capacitate / total);
}

Ferma::Ferma()
{
	v = NULL;
}

Ferma::Ferma(Hambar** vect)
{
    delete[] v;
    v = new Hambar * [5];
    for (int i = 0; i < 5; ++i)
        v[i] = vect[i];
}

Ferma::~Ferma()
{
    delete[] v;
    delete[] cant;
}
void Ferma::afisare_detalii()
{
   for (int i = 0; i < 5; ++i)
        cout << (*v[i]);
    cout << endl;
    double temp[4];
    temp[0] = get_consum();
    temp[1] = cant[0];
    temp[2] = cant[1];
    temp[3] = cant[2];
    management(cant);
    cout << "Cantitate nutret stocata optim: " << cant[0] << endl;
    cout << "Cantitate graunte stocata optim: " << cant[1] << endl;
    cout << "Cantitate iarba stocata optim: " << cant[2] << endl;
    cout << "Un depozit incarcat optim va stoca mancare pentru " << zile << " zile." << endl << endl;
    cout << "In fiecare zi se consuma " << temp[0] << " kg de mancare, distribuite astfel:" << endl;
    cout << '\t' << temp[1] << " kg de nutret" << endl;
    cout << '\t' << temp[2] << " kg de graunte" << endl;
    cout << '\t' << temp[3] << " kg de iarba" << endl << endl;
    cout << "Depozitul va fi aprovizionat de " << ceil((double)365 / zile) << " ori pe an." << endl << endl;
    double diferenta = zile * ceil((double)365 / zile) - 365;
    cout << "La sfarsitul anului raman " << temp[0] * diferenta << " kg de mancare, ditribuite astfel:" << endl;
    cout << '\t' << diferenta * temp[1] << " kg de nutret" << endl;
    cout << '\t' << diferenta * temp[2] << " kg de graunte" << endl;
    cout << '\t' << diferenta * temp[3] << " kg de iarba" << endl << endl;

    sortare_consumatori();
    cout << "Top 3 consumatori de mancare sunt:" << endl;
    for (int i = 0; i < 3; ++i)
        cout << *(v[i]);

}

void Ferma::sortare_consumatori()
{
    for (int i = 0; i < 5 - 1; ++i)
    {
        for (int j = 0; j < 5-i-1; ++j)
        {
            Hambar* t1 = v[j];
            Hambar* t2 = v[j+1];
            if (t1->get_total() < t2->get_total())
            {

                v[j] = t2;
                v[j+1] = t1;

            }
        }
    }


}

