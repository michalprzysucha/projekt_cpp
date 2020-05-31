#ifndef MOTOCYKL_H
#define MOTOCYKL_H
#include "pojazd.h"
#include "pasazer.h"

class motocykl : public pojazd
{
	public:
        motocykl(int _liczba_kol, double _cisnienie_w_oponach, 
				 double _max_cisnienie_opon, std::string _marka, 
				 double _pojemnosc_baku, double _stan_baku, 
				 double _przebieg, double _srednie_spalanie, 
				 int _rok_produkcji);
        motocykl();
		motocykl(const motocykl &ref);
	    ~motocykl();                                                                                                                // jesli wiek pasazera < 7 to max. predkosc <= 40
        double sprawdz_stan_paliwa();
		void zatankuj(double ilosc_litrow);
        void jedz();
		void zatrzymaj_sie();
		void wypisz_pasazera();
        
     private:
		double pojemnosc_baku;
		double stan_baku;
		double przebieg;
		double srednie_spalanie;
		int rok_produkcji;
		std::string marka;
        pasazer pasazer_motora;
};

#endif
