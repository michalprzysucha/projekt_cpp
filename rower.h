#ifndef ROWER_H
#define ROWER_H
#include "pojazd.h"
#include "pasazer.h"

class rower : public pojazd
{
    public:
        rower();
        rower(int _liczba_kol, double _cisnienie_w_oponach, 
              double _max_cisnienie_opon, int _rok_produkcji, double _wielkosc_ramy,
              std::string _marka, std::string _rodzaj);
        rower(const rower &ref);
        ~rower();
        void jedz();
		void zatrzymaj_sie();
        void dodaj_pasazera(const pasazer&);
        void wypisz_pasazerow();
        void ustaw_id(unsigned int id);
        void set_czy_wolne(bool);
        unsigned int get_id();
        bool get_czy_wolne();

     private:
		int rok_produkcji;
        double wielkosc_ramy;
        bool czy_wolne;                                                       // w calach
		std::string marka;
        std::string rodzaj;
        pasazer rowerzysta;
        friend std::ostream &operator<< (std::ostream &wyjscie, const rower &r);
};

#endif
