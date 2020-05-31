#include <iostream>
#include "pojazd.h"

pojazd::pojazd(int _liczba_kol, double _cisnienie_w_oponach, double _max_cisnienie_opon) : 

               liczba_kol(_liczba_kol), cisnienie_w_oponach(_cisnienie_w_oponach), 
               max_cisnienie_opon(_max_cisnienie_opon)
{
}

pojazd::pojazd()
{  
}

pojazd::~pojazd()
{
}

int pojazd::sprawdz_cisnienie_kol()
{
    return cisnienie_w_oponach;
}

void pojazd::napompuj_kola(double ile_barow)
{
    if(cisnienie_w_oponach + ile_barow <= max_cisnienie_opon)
    {
        cisnienie_w_oponach += ile_barow;
    }
    else
    {
        std::cout << "Za duze cisnienie! Pekna opony!" << std::endl;
    }
}

std::ostream & operator<< (std::ostream &wyjscie, const pojazd &p)
{
    return wyjscie << "Liczba kol: " << p.liczba_kol << std::endl << "cisnienie w oponach: " << p.cisnienie_w_oponach << std::endl << "maksymalne cisnienie w oponach: " << p.max_cisnienie_opon << std::endl << "aktualy stan: " << p.aktualny_stan << std::endl;
}
