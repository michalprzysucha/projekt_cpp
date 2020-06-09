#ifndef MENU_H
#define MENU_H
#include <vector>
#include "pasazer.h"
#include "pojazd.h"
#include "samochod.h"
#include "motocykl.h"
#include "rower.h"

class Menu
{
    public:
                Menu();
                ~Menu();
                void print_main_menu();
                void print_menu_pasazer();
                void print_menu_samochod();
                void print_menu_motocykl();
                void print_menu_rower();
                void wroc();
                void wyczysc_ekran();
                void wyjdz();
                void pobierz_wybor(int menu); 
                void dodaj_pasazera();    
                void sczytaj_pasazerow();
                void wypisz_wszystkich_p();
                void posortuj_wg_wieku();
                void dodaj_samochod();
                void sczytaj_samochody();
                void sczytaj_motory();
                void sczytaj_rowery();
                void powrot_z_funkcji();
                void dodaj_pasazera_s();
                void wypisz_pasazerow_s();
                void jedz_s();
                void cofaj_sie();
                void zatrzymaj_sie_s();
                void sprawdz_stan_paliwa_s();
                void zatankuj_s();
                void wypisz_wszystkie_s();
                void dodaj_motocykl();
                void dodaj_pasazera_m();
                void wypisz_pasazerow_m();
                void jedz_m();
                void zatrzymaj_sie_m();
                void sprawdz_stan_paliwa_m();
                void zatankuj_m();
                void wypisz_wszystkie_m();
                void dodaj_rower();
                void dodaj_pasazera_r();
                void wypisz_pasazerow_r();
                void jedz_r();
                void zatrzymaj_sie_r();
                void wypisz_wszystkie_r();
                unsigned int wybierz_sam();
                unsigned int wybierz_motoc();
                unsigned int wybierz_rower();
                unsigned int wybierz_pasazera();
                int get_stan();
                std::vector <pojazd*> pojazdy;
                std::vector <pasazer*> pasazerowie;
                std::vector <samochod*> samochody;
                std::vector <motocykl*> motocykle;
                std::vector <rower*> rowery;
    private:
                int wybor;
                enum stan_menu
                {
                        m_glowne,
                        m_pasazer,
                        m_samochod,
                        m_motocykl,
                        m_rower
                };
                stan_menu aktualny_stan = m_glowne;
};

bool porownaj(pasazer*, pasazer*);


#endif