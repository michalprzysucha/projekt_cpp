#ifndef ROWER_H
#define ROWER_H

class rower : public pojazd
{
    public:
        rower();
        rower(int _liczba_kol, double _cisnienie_w_oponach, double _max_cisnienie_opon, std::string _marka, std::string _rodzaj, int _rok_produkcji);
        ~rower();
		double dobierz_rame();                                                       // na podstawie wzrostu
        void jedz();
		void zatrzymaj_sie();
        void wypisz_pasazerow();
        
     private:
		int rok_produkcji;
        double wielkosc_ramy;                                                        // w calach
		std::string marka;
        std::string rodzaj;
        pasazer rowerzysta;                                                         // np. trekkingowy, górski

};

#endif