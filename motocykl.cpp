#include <iostream>
#include "motocykl.h"

motocykl::motocykl(int _liczba_kol, double _cisnienie_w_oponach, double _max_cisnienie_opon,
                   std::string _marka, double _pojemnosc_baku, double _stan_baku, 
                   double _przebieg, double _srednie_spalanie, int _rok_produkcji) : 
                   
                   pojazd(_liczba_kol, _cisnienie_w_oponach, _max_cisnienie_opon), 
                   pojemnosc_baku(_pojemnosc_baku), stan_baku(_stan_baku), 
                   przebieg(_przebieg), srednie_spalanie(_srednie_spalanie), 
                   rok_produkcji(_rok_produkcji), marka(_marka) 
{
}

motocykl::motocykl()
{
}

motocykl::~motocykl()
{
}

motocykl::motocykl(const motocykl &ref)
{
    pojemnosc_baku = ref.pojemnosc_baku;
    stan_baku = ref.stan_baku;
    przebieg = ref.przebieg;
    srednie_spalanie = ref.srednie_spalanie;
    rok_produkcji = ref.rok_produkcji;
    marka = ref.marka;
    pasazer_motora = ref.pasazer_motora;
}

double motocykl::sprawdz_stan_paliwa()
{
    return stan_baku;
}

void motocykl::zatankuj(double ilosc_litrow)
{
    if(stan_baku + ilosc_litrow <= pojemnosc_baku)
    {
        stan_baku += ilosc_litrow;
    }
    else
    {
        std::cout << "Chcesz zatankowac zbyt duzo paliwa!" << std::endl;
        std::cout << "Zatankowano do pelna" << std::endl;
        stan_baku = pojemnosc_baku;
    }
}

void motocykl::jedz()
{
    aktualny_stan = jedzie;
    while(aktualny_stan == jedzie)
    {
        stan_baku = stan_baku - srednie_spalanie;
        if(stan_baku <= 0)
        {
            aktualny_stan = stoi;
            przebieg += (100 * stan_baku) / srednie_spalanie;
            stan_baku = 0;
            break;
        }

        przebieg += 100;
    }
}

void motocykl::zatrzymaj_sie()
{
    aktualny_stan = stoi;
}

void motocykl::wypisz_pasazerow()
{
    std::cout << pasazer_motora.get_imie() << std::endl;
}

std::ostream &operator<< (std::ostream &wyjscie, const motocykl &m)
{          
    return wyjscie << std::endl << "ID: " << m.id << std::endl << "Marka: " << m.marka << std::endl << "Pojemnosc baku: " << m.pojemnosc_baku << std::endl << "Stan baku: " << m.stan_baku << std::endl << "Przebieg: " << m.przebieg << std::endl << "Srednie spalanie: " << m.srednie_spalanie << std::endl << "Rok produkcji: " << m.rok_produkcji << std::endl << "Liczba kol: " << m.liczba_kol << std::endl << "Cisnienie w oponach: " << m.cisnienie_w_oponach << std::endl << "Maksymalne cisnienie opon: " << m.max_cisnienie_opon << std::endl;
}

void motocykl::ustaw_id(unsigned int id_motocykl)
{
    id = id_motocykl;
}

unsigned int motocykl::get_id()
{
    return id;
}