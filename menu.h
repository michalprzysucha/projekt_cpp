#ifndef MENU_H
#define MENU_H
#include <vector>
#include "pasazer.h"

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
                std::vector <pasazer*> pasazerowie;
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