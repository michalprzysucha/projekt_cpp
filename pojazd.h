#ifndef POJAZD_H
#define POJAZD_H

class pojazd
{
	public:
		pojazd();
		pojazd(int _liczba_kol, double _cisnienie_w_oponach, 
			   double _max_cisnienie_opon);
		~pojazd();
		virtual void jedz() = 0;
		virtual void zatrzymaj_sie() = 0;
		virtual void wypisz_pasazerow() = 0;
		virtual void ustaw_id(unsigned int id) = 0;
		void napompuj_kola(double ile_barow);
		virtual unsigned int get_id() = 0;
		int sprawdz_cisnienie_kol();

	protected:
		unsigned int id;
		int liczba_kol;
		double cisnienie_w_oponach;							// w barach
		double max_cisnienie_opon;
		enum stan
		{
			stoi,
			jedzie,
			cofa
		};
		stan aktualny_stan = stoi;
};

#endif
