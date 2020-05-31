#include <iostream>
#include "rower.h"

rower::rower(int _liczba_kol, double _cisnienie_w_oponach, double _max_cisnienie_opon, 
             std::string _marka, std::string _rodzaj, int _rok_produkcji) : 
             
             pojazd(_liczba_kol, _cisnienie_w_oponach, _max_cisnienie_opon), 
             marka(_marka), rodzaj(_rodzaj), rok_produkcji(_rok_produkcji)
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

double rower::dobierz_rame()
{
    for(int i = 0; i < 8; i++)
    {
        if(rowerzysta.sprawdz_wzrost_pasazera() >= 191 - 5 * i)
        {
            return 21 - i;
        }
    }

    rodzaj = "dzieciecy";
    return 12;
}

void rower::jedz()
{
    aktualny_stan = jedzie;
}

void rower::zatrzymaj_sie()
{
    aktualny_stan = stoi;
}

void rower::wypisz_rowerzyste()
{
    std::cout << rowerzysta.get_imie() << std::endl;
}#include <iostream>

