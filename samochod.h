#ifndef SAMOCHOD_H
#define SAMOCHOD_H
#include <vector>
#include "pojazd.h"
#include "pasazer.h"

class samochod : public pojazd
{
	public:
		samochod();
	    samochod(int _liczba_kol, double _cisnienie_w_oponach, 
				 double _max_cisnienie_opon, std::string _marka,
				 int _rok_produkcji, double _pojemnosc_baku, 
				 double _stan_baku, double _przebieg, 
				 double _srednie_spalanie, int _liczba_miejsc, 
				 int _liczba_wolnych_miejsc);
		samochod(const samochod &ref);
		~samochod();
		int sprawdz_wolne_miejsca();
		double sprawdz_stan_paliwa();
		void zatankuj(double ilosc_litrow);
		void jedz();
		void zatrzymaj_sie();
		void cofaj_sie();
		void dodaj_pasazera(const pasazer &pasazer_samochodu);
		void wypisz_pasazerow();
		pasazer wez_pierwszego_pasazera(const pasazer &pasazer_samochodu);

	private:
		double pojemnosc_baku;
		double stan_baku;
		double przebieg;
		double srednie_spalanie;						// litry na 100 km
		int rok_produkcji;
		int liczba_miejsc;
		int liczba_wolnych_miejsc;
		std::string marka;
		std::vector <pasazer> pasazerowie;
};

#endif
