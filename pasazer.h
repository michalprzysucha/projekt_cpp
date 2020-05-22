#ifndef PASAZER_H
#define PASAZER_H

class pasazer
{
    public:
                pasazer();
                pasazer(std::string _imie, std::string _nazwisko, double _wzrost, int _wiek, std::string _preferowany_transport);
                ~pasazer();
                int sprawdz_wiek_pasazera();
                int sprawdz_wzrost_pasazera();
                std::string sprawdz_preferowany_transport();
                std::string get_imie();
                
    protected:
                int wiek;
                double wzrost;
                std::string imie;
                std::string nazwisko;
                std::string preferowany_transport;
};

#endif