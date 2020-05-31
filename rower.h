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
              std::string _rodzaj, int _rok_produkcji);
        rower(const rower &ref);
        ~rower();
		double dobierz_rame();                                                       // na podstawie wzrostu
        void jedz();
		void zatrzymaj_sie();
        void wypisz_rowerzyste();
                                                                 // np. trekkingowy, górski

     private:
		int rok_produkcji;
        double wielkosc_ramy;                                                        // w calach
		std::string marka;
        std::string rodzaj;
        pasazer rowerzysta;
};

#endif
