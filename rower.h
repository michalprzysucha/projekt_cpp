#ifndef ROWER_H
#define ROWER_H
#include "pojazd.h"
#include "pasazer.h"

class rower : public pojazd
{
    public:
        rower();
        rower(int _liczba_kol, double _cisnienie_w_oponach, 
              double _max_cisnienie_opon, std::string _marka,
              std::string _rodzaj, int _rok_produkcji, double _wielkosc_ramy);
        rower(const rower &ref);
        ~rower();
        void jedz();
		void zatrzymaj_sie();
        void wypisz_pasazerow();
        void ustaw_id(unsigned int id);
        unsigned int get_id();

     private:
		int rok_produkcji;
        double wielkosc_ramy;                                                        // w calach
		std::string marka;
        std::string rodzaj;
        pasazer rowerzysta;
        friend std::ostream &operator<< (std::ostream &wyjscie, const rower &r);
};

#endif
