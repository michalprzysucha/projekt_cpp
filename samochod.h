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
				 double _max_cisnienie_opon, int _rok_produkcji, int _liczba_miejsc, int _liczba_wolnych_miejsc,
				 double _pojemnosc_baku, double _stan_baku, double _przebieg,
				 double _srednie_spalanie, std::string _marka);
		samochod(const samochod &ref);
		~samochod();
		int sprawdz_wolne_miejsca();
		unsigned int get_id();
		double sprawdz_stan_paliwa();
		double get_przebieg();
		void zatankuj(double ilosc_litrow);
		void jedz();
		void zatrzymaj_sie();
		void cofaj_sie();
		void dodaj_pasazera(const pasazer &pasazer_samochodu);
		void wypisz_pasazerow();
		void ustaw_id(unsigned int id);
		pasazer wez_pierwszego_pasazera(const pasazer &pasazer_samochodu);

	private:
		int rok_produkcji;
		int liczba_miejsc;
		int liczba_wolnych_miejsc;
		double pojemnosc_baku;
		double stan_baku;
		double przebieg;
		double srednie_spalanie;						// litry na 100 km
		std::string marka;
		std::vector <pasazer> pasazerowie;
		friend std::ostream &operator<< (std::ostream &wyjscie, const samochod &s);
};

#endif
