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
		void napompuj_kola(double ile_barow);
		int sprawdz_cisnienie_kol();

	protected:
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
		friend std::ostream & operator<< (std::ostream &wyjscie, const pojazd &p);
};

#endif
