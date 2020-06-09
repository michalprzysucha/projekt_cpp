#ifndef PASAZER_H
#define PASAZER_H

class pasazer
{
    public:
                pasazer();
                pasazer(int _wiek, double _wzrost, std::string _imie, std::string _nazwisko,
                std::string _preferowany_transport);
                pasazer(const pasazer &ref);
                ~pasazer();
                int sprawdz_wiek_pasazera();
                unsigned int get_id();
                double sprawdz_wzrost_pasazera();
                std::string sprawdz_preferowany_transport();
                std::string get_imie();
                std::string get_nazwisko();
                std::string get_preferowany_transport();
                void ustaw_id(unsigned int id);
                void operator=(const pasazer&);                
    private:
                unsigned int pasazer_id; 
                int wiek;
                double wzrost;
                std::string imie;
                std::string nazwisko;
                std::string preferowany_transport;
                friend std::ostream & operator<< (std::ostream &wyjscie, const pasazer &p);
};

#endif
