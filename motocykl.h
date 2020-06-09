#ifndef MOTOCYKL_H
#define MOTOCYKL_H
#include "pojazd.h"
#include "pasazer.h"

class motocykl : public pojazd
{
	public:
        motocykl(int _liczba_kol, double _cisnienie_w_oponach, double _max_cisnienie_opon, 
				 int _rok_produkcji, double _pojemnosc_baku, double _stan_baku,
				 double _przebieg, double _srednie_spalanie, std::string _marka);
        motocykl();
		motocykl(const motocykl &ref);
	    ~motocykl();                                                                                                                // jesli wiek pasazera < 7 to max. predkosc <= 40
        double sprawdz_stan_paliwa();
		double get_przebieg();
		void zatankuj(double ilosc_litrow);
        void jedz();
		void zatrzymaj_sie();
		void wypisz_pasazerow();
		void ustaw_id(unsigned int id);
		void dodaj_pasazera(const pasazer&);
		void set_czy_wolne(bool);
		unsigned int get_id();
		bool get_czy_wolne();
        
     private:
		int rok_produkcji;
		double pojemnosc_baku;
		double stan_baku;
		double przebieg;
		double srednie_spalanie;
		std::string marka;
		bool czy_wolne;
        pasazer pasazer_motora;
		friend std::ostream &operator<< (std::ostream &wyjscie, const motocykl &m);
};

#endif
