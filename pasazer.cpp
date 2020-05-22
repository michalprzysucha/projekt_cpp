#include <iostream>
#include "pasazer.h"

pasazer::pasazer(std::string _imie, std::string _nazwisko, double _wzrost, int _wiek, std::string _preferowany_transport) : imie(_imie), nazwisko(_nazwisko), wzrost(_wzrost), wiek(_wiek), preferowany_transport(_preferowany_transport)
{
}

pasazer::~pasazer()
{
}

int pasazer::sprawdz_wiek_pasazera()
{
    return wiek;
}

int pasazer::sprawdz_wzrost_pasazera()
{
    return wzrost;
}

std::string pasazer::sprawdz_preferowany_transport()
{
    return preferowany_transport;
}

std::string pasazer::get_imie()
{
    return imie;
}