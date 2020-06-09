#include <iostream>
#include "rower.h"

rower::rower(int _liczba_kol, double _cisnienie_w_oponach, 
              double _max_cisnienie_opon, int _rok_produkcji, double _wielkosc_ramy,
              std::string _marka, std::string _rodzaj) : 
             
             pojazd(_liczba_kol, _cisnienie_w_oponach, _max_cisnienie_opon), 
             rok_produkcji(_rok_produkcji), wielkosc_ramy(_wielkosc_ramy),
             czy_wolne(true), marka(_marka), rodzaj(_rodzaj)
{
}

rower::rower()
{
}

rower::rower(const rower &ref)
{
    rok_produkcji = ref.rok_produkcji;
    wielkosc_ramy = ref.wielkosc_ramy;
    marka = ref.marka;
    rodzaj = ref.rok_produkcji;
    rowerzysta = ref.rowerzysta;
}

rower::~rower()
{
}

void rower::jedz()
{
    aktualny_stan = jedzie;
}

void rower::zatrzymaj_sie()
{
    aktualny_stan = stoi;
}

void rower::dodaj_pasazera(const pasazer &p)
{
    rowerzysta = p;
}

void rower::wypisz_pasazerow()
{
    std::cout << rowerzysta.get_imie() << " " << rowerzysta.get_nazwisko() << std::endl;
}

std::ostream &operator<< (std::ostream &wyjscie, const rower &r)
{          
    return wyjscie << std::endl << "ID: " << r.id << std::endl << "Marka: " << r.marka << std::endl << "Rodzaj: " << r.rodzaj << std::endl << "Rok produkcji: " << r.rok_produkcji << std::endl << "Wielkosc ramy: " << r.wielkosc_ramy << std::endl << "Liczba kol: " << r.liczba_kol << std::endl << "Cisnienie w oponach: " << r.cisnienie_w_oponach << std::endl << "Maksymalne cisnienie w oponach: " << r.max_cisnienie_opon << std::endl;
}

void rower::ustaw_id(unsigned int id_rower)
{
    id = id_rower;
}

void rower::set_czy_wolne(bool test)
{
    czy_wolne = test;
}

bool rower::get_czy_wolne()
{
    return czy_wolne;
}

unsigned int rower::get_id()
{
    return id;
}