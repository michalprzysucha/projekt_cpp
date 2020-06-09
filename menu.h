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
                void sczytaj_pasazerow();
                void sczytaj_samochody();
                void sczytaj_motory();
                void sczytaj_rowery();
                void powrot_z_funkcji();
                void sczytaj_wszystkie_pojazdy();
                void dodaj_pasazera_s();
                void wypisz_pasazerow_s();
                void jedz_s();
                unsigned int wybierz_sam();
                unsigned int wybierz_motoc();
                unsigned int wybierz_rower();
                unsigned int wybierz_pasazera();
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
};

#endif