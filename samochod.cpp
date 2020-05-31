#include <iostream>
#include "samochod.h"

samochod::samochod(int _liczba_kol, double _cisnienie_w_oponach, 
                   double _max_cisnienie_opon, std::string _marka,
                   int _rok_produkcji, double _pojemnosc_baku, 
                   double _stan_baku, double _przebieg, double _srednie_spalanie, 
                   int _liczba_miejsc, int _liczba_wolnych_miejsc) : 
                   
                   pojazd(_liczba_kol, _cisnienie_w_oponach, _max_cisnienie_opon),
                   marka(_marka), rok_produkcji(_rok_produkcji),
                   pojemnosc_baku(_pojemnosc_baku), stan_baku(_stan_baku),
                   przebieg(_przebieg), srednie_spalanie(_srednie_spalanie), 
                   liczba_miejsc(_liczba_miejsc), 
                   liczba_wolnych_miejsc(_liczba_wolnych_miejsc)
{
}

samochod::samochod()
{
}

samochod::samochod(const samochod &ref)
{
    pojemnosc_baku = ref.pojemnosc_baku;
    stan_baku = ref.stan_baku;
    przebieg = ref.przebieg;
    srednie_spalanie = ref.srednie_spalanie;
    rok_produkcji = ref.rok_produkcji;
    liczba_miejsc = ref.liczba_miejsc;
    liczba_wolnych_miejsc = ref.liczba_wolnych_miejsc;
    marka = ref.marka;
    pasazerowie = ref.pasazerowie;
}

samochod::~samochod()
{
}

int samochod::sprawdz_wolne_miejsca()
{
    return liczba_wolnych_miejsc;
}

double samochod::sprawdz_stan_paliwa()
{
    return stan_baku;
}

void samochod::zatankuj(double ilosc_litrow)
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

void samochod::jedz()
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

void samochod::zatrzymaj_sie()
{
    aktualny_stan = stoi;
}

void samochod::cofaj_sie()
{
    aktualny_stan = cofa;
    while(aktualny_stan == cofa)
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

void samochod::dodaj_pasazera(const pasazer &pasazer_samochodu)
{
    pasazerowie.push_back(pasazer_samochodu);
}

pasazer samochod::wez_pierwszego_pasazera(const pasazer &pasazer_samochodu)
{
    return pasazerowie.front();
}

void samochod::wypisz_pasazerow()
{
    std::vector <pasazer>::iterator it;
    for(it = pasazerowie.begin(); it != pasazerowie.end(); it++)
    {
        std::cout << it -> get_imie() << std::endl;
    }
}
