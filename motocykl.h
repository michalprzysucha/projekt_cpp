#ifndef MOTOCYKL_H
#define MOTOCYKL_H

class motocykl : public pojazd
{
	public:
        motocykl(int _liczba_kol, double _cisnienie_w_oponach, double _max_cisnienie_opon, std::string _marka, double _pojemnosc_baku, double _stan_baku, double _przebieg, double _srednie_spalanie, double _wysokosc_motocyklu, int _rok_produkcji);
        ~motocykl();                                                                                                                // jesli wiek pasazera < 7 to max. predkosc <= 40
		double dobierz_wielkosc_motocyklu();                                                                                                        // w zaleznosci od wzrostu
        double sprawdz_stan_paliwa();
		void zatankuj();
        void jedz();
		void zatrzymaj_sie();
		void wypisz_pasazerow();
        
     private:
		double pojemnosc_baku;
		double stan_baku;
		double przebieg;
		double srednie_spalanie;
        double wysokosc_motora;
		int rok_produkcji;
		std::string marka;
        pasazer pasazer_motora;
};

#endif