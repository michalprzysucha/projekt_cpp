#include <iostream>
#include <stdlib.h>
#include <fstream>
#include "menu.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::print_main_menu()
{
    std::cout << "               MENU GLOWNE                " << std::endl;
    std::cout <<"===========================================" << std::endl;
    std::cout                                                 << std::endl;
    std::cout << "1. Akcje pasazerow"                         << std::endl;
    std::cout << "2. Akcje samochodu"                         << std::endl;
    std::cout << "3. Akcje motocyklu"                         << std::endl;
    std::cout << "4. Akcje roweru"                            << std::endl;
    std::cout << "5. Wyjdz"                                   << std::endl;
    std::cout                                                 << std::endl;
    std::cout <<"===========================================" << std::endl;
}

void Menu::print_menu_pasazer()
{
    std::cout << "             AKCJE PASAZERA               " << std::endl;
    std::cout <<"===========================================" << std::endl;
    std::cout                                                 << std::endl;
    std::cout << "1. Dodaj pasazera"                          << std::endl;
    std::cout << "2. Sczytaj dane pasazerow z pliku"          << std::endl;
    std::cout << "3. Wroc"                                    << std::endl;
    std::cout                                                 << std::endl;
    std::cout <<"===========================================" << std::endl;
}

void Menu::print_menu_samochod()
{
    std::cout << "            AKCJE SAMOCHODU               " << std::endl;
    std::cout <<"===========================================" << std::endl;
    std::cout                                                 << std::endl;
    std::cout << "1. Dodaj samochod"                          << std::endl;
    std::cout << "2. Sczytaj dane samochodow z pliku"         << std::endl;
    std::cout << "3. Dodaj pasazera do samochodu"             << std::endl;
    std::cout << "4. Wypisz pasazerow auta"                   << std::endl;
    std::cout << "5. Jedz"                                    << std::endl;
    std::cout << "6. Cofaj"                                   << std::endl;
    std::cout << "7. Zatrzymaj sie"                           << std::endl;
    std::cout << "8. Sprawdz stan paliwa"                     << std::endl;
    std::cout << "9. Zatankuj"                                << std::endl;
    std::cout << "10. Wroc"                                   << std::endl;
    std::cout                                                 << std::endl;
    std::cout <<"===========================================" << std::endl;
}

void Menu::print_menu_motocykl()
{
    std::cout << "            AKCJE MOTOCYKLU               " << std::endl;
    std::cout <<"===========================================" << std::endl;
    std::cout                                                 << std::endl;
    std::cout << "1. Dodaj motocykl"                          << std::endl;
    std::cout << "2. Sczytaj dane motocyklow z pliku"         << std::endl;
    std::cout << "3. Dodaj pasazera do motocyklu"             << std::endl;
    std::cout << "4. Wypisz pasazera motocyklu"               << std::endl;
    std::cout << "5. Jedz"                                    << std::endl;
    std::cout << "6. Zatrzymaj sie"                           << std::endl;
    std::cout << "7. Sprawdz stan paliwa"                     << std::endl;
    std::cout << "8. Zatankuj"                                << std::endl;
    std::cout << "9. Wroc"                                    << std::endl;
    std::cout                                                 << std::endl;
    std::cout <<"===========================================" << std::endl;
}

void Menu::print_menu_rower()
{
    std::cout << "            AKCJE ROWERU                  " << std::endl;
    std::cout <<"===========================================" << std::endl;
    std::cout                                                 << std::endl;
    std::cout << "1. Dodaj rower"                             << std::endl;
    std::cout << "2. Sczytaj dane rowerow z pliku"            << std::endl;
    std::cout << "3. Przypisz osobe do roweru"                << std::endl;
    std::cout << "4. Dobierz rame do osoby"                   << std::endl;
    std::cout << "5. Wypisz rowerzyste"                       << std::endl;
    std::cout << "6. Jedz"                                    << std::endl;
    std::cout << "7. Zatrzymaj sie"                           << std::endl;
    std::cout << "8. Wroc"                                    << std::endl;
    std::cout                                                 << std::endl;
    std::cout <<"===========================================" << std::endl;
}

void Menu::wyjdz()
{
    exit(0);
}

void Menu::wroc()
{
    wyczysc_ekran();
    print_main_menu();
}

void Menu::wyczysc_ekran()
{
    system("clear");
}

void Menu::pobierz_wybor(int stan_menu)
{
    std:: cout << std::endl;
    std::cout << "Prosze wybrac opcje" << std::endl;
    std::cin >> wybor;
  /*  switch(stan_menu)
    {
        case m_glowne:
                switch(wybor)
                {
                    case 1:
                            break;

                }
    } */
}

void Menu::sczytaj_pasazerow()
{
    std::ifstream input("pasazerowie.txt");
    std::string imie, nazwisko, preferowany_transport;
    int wiek;
    double wzrost;
    while(input >> imie >> nazwisko >> wiek >> wzrost >> preferowany_transport)
    {
        pasazerowie.push_back(new pasazer(imie, nazwisko, wzrost, wiek, preferowany_transport));
        std::cout << pasazerowie[pasazerowie.size() - 1] << std::endl;
        std::cout << "test" << std::endl;
    }

}