#include <iostream>
#include "pasazer.h"

pasazer::pasazer(std::string _imie, std::string _nazwisko,
                 double _wzrost, int _wiek, std::string _preferowany_transport) : 
                 
                 imie(_imie), nazwisko(_nazwisko), wzrost(_wzrost), wiek(_wiek), 
                 preferowany_transport(_preferowany_transport)
{
}

pasazer::pasazer()
{
}

pasazer::pasazer(const pasazer &ref)
{
    wiek = ref.wiek;
    wzrost = ref.wzrost;
    imie = ref.imie;
    nazwisko = ref.nazwisko;
    preferowany_transport = ref.preferowany_transport;
}

pasazer::~pasazer()
{
}

int pasazer::sprawdz_wiek_pasazera()
{
    return wiek;
}

double pasazer::sprawdz_wzrost_pasazera()
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

std::string pasazer::get_nazwisko()
{
    return nazwisko;
}

std::string pasazer::get_preferowany_transport()
{
    return preferowany_transport;
}

std::ostream & operator<< (std::ostream &wyjscie, const pasazer &p)
{
    return wyjscie << "Imie: " << p.imie << " nazwisko: " << p.nazwisko << std::endl << "wiek: " << p.wiek << std::endl << "wzrost: " << p.wzrost << std::endl << "preferowany transport: " << p.preferowany_transport << std::endl;
}
