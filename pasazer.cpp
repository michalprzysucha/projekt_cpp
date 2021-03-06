#include <iostream>
#include "pasazer.h"

pasazer::pasazer(int _wiek, double _wzrost, std::string _imie, std::string _nazwisko,
                std::string _preferowany_transport) : 
                 
                 wiek(_wiek), wzrost(_wzrost), imie(_imie), nazwisko(_nazwisko),
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

std::ostream &operator<< (std::ostream &wyjscie, const pasazer &p)
{
    return wyjscie << std::endl << "ID: " << p.pasazer_id << std::endl << "Imie: " << p.imie << std::endl << "Nazwisko: " << p.nazwisko << std::endl << "Wiek: " << p.wiek << std::endl << "Wzrost: " << p.wzrost << std::endl << "Preferowany transport: " << p.preferowany_transport << std::endl;
}

void pasazer::ustaw_id(unsigned int id)
{
    pasazer_id = id;
}

unsigned int pasazer::get_id()
{
    return pasazer_id;
}

void pasazer::operator=(const pasazer &p)
{
    pasazer_id = p.pasazer_id;
    wiek = p.wiek;
    wzrost = p.wzrost;
    imie = p.imie;
    nazwisko = p.nazwisko;
    preferowany_transport = p.preferowany_transport;
}