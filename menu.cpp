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
    std::cout << "9. Zatankuj"                               << std::endl;
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
    std::cout << "3. Przypisz osobe do motocyklu"             << std::endl;
    std::cout << "4. Wypisz motocykliste"                     << std::endl;
    std::cout << "5. Jedz"                                    << std::endl;
    std::cout << "6. Zatrzymaj sie"                           << std::endl;
    std::cout << "7. Sprawdz stan paliwa"                     << std::endl;
    std::cout << "8. Zatankuj"                                << std::endl;
    std::cout << "9. Wroc"                                   << std::endl;
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
    std::cout << "4. Wypisz rowerzyste"                       << std::endl;
    std::cout << "5. Jedz"                                    << std::endl;
    std::cout << "6. Zatrzymaj sie"                           << std::endl;
    std::cout << "7. Wroc"                                    << std::endl;
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

void Menu::powrot_z_funkcji()
{
    char znak;
    std::cout << "\nNacisnij dowolna litere aby powrocic do menu" << std::endl;
    std::cin >> znak;
}

void Menu::pobierz_wybor(int stan_menu)
{
    int wybor;
    
    while(1)
    {
        switch(stan_menu)
        {
            case m_glowne:
                    wyczysc_ekran();
                    print_main_menu();
                    std::cout << "\nProsze wybrac opcje" << std::endl;
                    std::cin >> wybor;

                    switch(wybor)
                    {
                        case 1:
                                stan_menu = m_pasazer;
                                break;

                        case 2:
                                stan_menu = m_samochod;
                                break;

                        case 3:
                                stan_menu = m_motocykl;
                                break;
                        
                        case 4:
                                stan_menu = m_rower;
                                break;

                        case 5:
                                wyjdz();
                    }
                    break;

            case m_pasazer:
                    wyczysc_ekran();
                    print_menu_pasazer();
                    std::cout << "\nProsze wybrac opcje" << std::endl;
                    std::cin >> wybor;

                    switch(wybor)
                    {
                        case 1:
                                //dodaj_pasazera();
                                break;

                        case 2:
                                sczytaj_pasazerow();
                                powrot_z_funkcji();
                                wyczysc_ekran();
                                break;

                        case 3:
                                stan_menu = m_glowne;
                                wroc();
                                break;
                    }
                    break;
            
            case m_samochod:
                    wyczysc_ekran();
                    print_menu_samochod();
                    std::cout << "\nProsze wybrac opcje" << std::endl;
                    std::cin >> wybor;                

                    switch(wybor)
                    {
                        case 1:
                                //dodaj_samochod();
                                 break;

                        case 2:
                                sczytaj_samochody();
                                powrot_z_funkcji();
                                wyczysc_ekran();
                                break;

                        case 3:
                                dodaj_pasazera_s();
                                break;

                        case 4:
                                wypisz_pasazerow_s();
                                break;

                        case 5:
                                jedz_s();
                                break;
                        
                        case 6:
                                //cofaj_sie();
                                break;

                        case 7:
                                //zatrzymaj_sie();
                                break;

                        case 8:
                                //sprawdz_stan_paliwa();
                                break;

                        case 9:
                                //zatankuj();
                                break;

                        case 10:
                                stan_menu = m_glowne;
                                wroc();
                                break;
                    }
                    break;

            case m_motocykl:
                    wyczysc_ekran();
                    print_menu_motocykl();
                    std::cout << "\nProsze wybrac opcje" << std::endl;
                    std::cin >> wybor;                

                    switch(wybor)
                    {
                        case 1:
                                //dodaj_motocykl();
                                break;

                        case 2:
                                sczytaj_motory();
                                powrot_z_funkcji();
                                wyczysc_ekran();
                                break;

                        case 3:
                                //dodaj_pasazera();
                                break;

                        case 4:
                                //wypisz_pasazerow();
                                break;

                        case 5:
                                //jedz();
                                break;

                        case 6:
                                //zatrzymaj_sie();
                                break;

                        case 7:
                                //sprawdz_stan_paliwa();
                                break;

                        case 8:
                                //zatankuj();
                                break;

                        case 9:
                                stan_menu = m_glowne;
                                wroc();
                                break;
                    }
                    break;

            case m_rower:
                    wyczysc_ekran();
                    print_menu_rower();
                    std::cout << "\nProsze wybrac opcje" << std::endl;
                    std::cin >> wybor;                

                    switch(wybor)
                    {
                        case 1:
                                //dodaj_rower();
                                break;

                        case 2:
                                sczytaj_rowery();
                                powrot_z_funkcji();
                                wyczysc_ekran();
                                break;

                        case 3:
                                //dodaj_pasazera();
                                break;

                        case 4:
                                //wypisz_pasazerow();
                                break;

                        case 5:
                                //jedz();
                                break;
                        
                        case 6:
                                //zatrzymaj_sie();
                                break;

                        case 7:
                                stan_menu = m_glowne;
                                wroc();
                                break;
                    }
                    break;          
        }
    }
    
}

void Menu::sczytaj_pasazerow()
{
    std::ifstream input("pasazerowie.txt");
    std::string imie, nazwisko, preferowany_transport;
    int wiek;
    int i = 0;
    double wzrost;

    while(input >> imie >> nazwisko >> wzrost >> wiek >> preferowany_transport)
    {
        pasazerowie.push_back(new pasazer(imie, nazwisko, wzrost, wiek, preferowany_transport));
        pasazerowie[i] -> ustaw_id(i + 1);
        std::cout << *pasazerowie[pasazerowie.size() - 1] << std::endl;
        i++;
    }

    input.close();
}

void Menu::sczytaj_samochody()
{
    std::ifstream input("samochody.txt");
    std::string marka;
    double pojemnosc_baku;
    double stan_baku;
    double przebieg;
    double srednie_spalanie;
    double cisnienie_w_oponach;
    double max_cisnienie_opon;
    int rok_produkcji;
    int liczba_miejsc;
    int liczba_wolnych_miejsc;
    int liczba_kol;
    int i = 0;

    while(input >> marka >> pojemnosc_baku >> stan_baku >> przebieg >> srednie_spalanie >> rok_produkcji >> liczba_miejsc >> liczba_wolnych_miejsc >> liczba_kol >> cisnienie_w_oponach >> max_cisnienie_opon)
    {
        samochody.push_back(new samochod(liczba_kol, cisnienie_w_oponach, max_cisnienie_opon, marka, rok_produkcji, pojemnosc_baku, stan_baku, przebieg, srednie_spalanie, liczba_miejsc, liczba_wolnych_miejsc));
        samochody[i] -> ustaw_id(i + 1);
        std::cout << *samochody[samochody.size() - 1] << std::endl;
        i++;
    }

    input.close();
}

void Menu::sczytaj_motory()
{
    std::ifstream input("motocykle.txt");
    double pojemnosc_baku;
    double stan_baku;
    double przebieg;
    double srednie_spalanie;
    double cisnienie_w_oponach;
    double max_cisnienie_opon;
    int rok_produkcji;
    int liczba_kol;
    int i = 0;
    std::string marka;

    while(input >> marka >> pojemnosc_baku >> stan_baku >> przebieg >> srednie_spalanie >> rok_produkcji >> liczba_kol >> cisnienie_w_oponach >> max_cisnienie_opon)
    {
        motocykle.push_back(new motocykl(liczba_kol, cisnienie_w_oponach, max_cisnienie_opon, marka, pojemnosc_baku, stan_baku, przebieg, srednie_spalanie, rok_produkcji));
        motocykle[i] -> ustaw_id(i + 1);
        std::cout << *motocykle[motocykle.size() - 1] << std::endl;
        i++;
    }

    input.close();
}

void Menu::sczytaj_rowery()
{
    std::ifstream input("rowery.txt");
    int rok_produkcji;
    int liczba_kol;
    int i = 0;
    double cisnienie_w_oponach;
    double max_cisnienie_opon;
    double wielkosc_ramy;                                                        // w calach
    std::string marka;
    std::string rodzaj;

    while(input >> marka >> rodzaj >> rok_produkcji >> wielkosc_ramy >> liczba_kol >> cisnienie_w_oponach >> max_cisnienie_opon)
    {
        rowery.push_back(new rower(liczba_kol, cisnienie_w_oponach, max_cisnienie_opon, marka, rodzaj, rok_produkcji, wielkosc_ramy));
        rowery[i] -> ustaw_id(i + 1);
        std::cout << *rowery[rowery.size() - 1] << std::endl;
        i++;
    }

    input.close();
}

unsigned int Menu::wybierz_sam()
{
        unsigned int wybor_id;

        wyczysc_ekran();

        if(samochody.empty())
        {
                std::cout << "Brak samochodow w bazie" << std::endl;
                exit(1);
        }

        std::cout << "Oto lista dostepnych samochodow." << std::endl << std::endl;
        std::vector <samochod*>::iterator it;
        for(it = samochody.begin(); it != samochody.end(); it++)
        {
                std::cout << **it;
        }

        std::cout << "\n\nProsze podac ID samochodu aby go wybrac" << std::endl;
        while(std::cin >> wybor_id)
        {
                if(wybor_id <= samochody.back() -> get_id())
                {
                        break;
                }
        }

        return wybor_id;
}

unsigned int Menu::wybierz_motoc()
{
        unsigned int wybor_id;

        wyczysc_ekran();

        if(motocykle.empty())
        {
                std::cout << "Brak motocykli w bazie" << std::endl;
                exit(1);
        }

        std::cout << "Oto lista dostepnych motocykli." << std::endl << std::endl;
        std::vector <motocykl*>::iterator it;
        for(it = motocykle.begin(); it != motocykle.end(); it++)
        {
                std::cout << **it;
        }

        std::cout << "\n\nProsze podac ID motocyklu aby go wybrac" << std::endl;
        while(std::cin >> wybor_id)
        {
                if(wybor_id <= motocykle.back() -> get_id())
                {
                        break;
                }
        }


        return wybor_id;  
}

unsigned int Menu::wybierz_rower()
{
        unsigned int wybor_id;

        wyczysc_ekran();

        if(rowery.empty())
        {
                std::cout << "Brak rowerow w bazie" << std::endl;
                exit(1);
        }

        std::cout << "Oto lista dostepnych rowerow." << std::endl << std::endl;
        std::vector <rower*>::iterator it;
        for(it = rowery.begin(); it != rowery.end(); it++)
        {
                std::cout << **it;
        }

        std::cout << "\n\nProsze podac ID roweru aby go wybrac" << std::endl;
        while(std::cin >> wybor_id)
        {
                if(wybor_id <= rowery.back() -> get_id())
                {
                        break;
                }
        }


        return wybor_id;  
}

unsigned int Menu::wybierz_pasazera()
{
        unsigned int wybor_id;

        wyczysc_ekran();

        if(pasazerowie.empty())
        {
                std::cout << "Brak pasazerow w bazie" << std::endl;
                exit(1);
        }

        std::cout << "Oto lista dostepnych pasazerow." << std::endl << std::endl;
        std::vector <pasazer*>::iterator it;
        for(it = pasazerowie.begin(); it != pasazerowie.end(); it++)
        {
                std::cout << **it;
        }

        std::cout << "\n\nProsze podac ID pasazera aby go wybrac" << std::endl;
        while(std::cin >> wybor_id)
        {
                if(wybor_id <= pasazerowie.back() -> get_id())
                {
                        break;
                }
        }

        return wybor_id;  
}

void Menu::dodaj_pasazera_s()
{
        unsigned int id_pasazera = wybierz_pasazera();
        unsigned int id_samochodu = wybierz_sam();

        std::vector <samochod*>::iterator it_s;
        std::vector <pasazer*>::iterator it_p;
        for(it_s = samochody.begin(); it_s != samochody.end(); it_s++)
        {
                if((*it_s) -> get_id() == id_samochodu)
                {
                        if((*it_s) -> sprawdz_wolne_miejsca() == 0)
                        {
                                std::cout << "Brak wolnych miejsc" << std::endl;
                                exit(1);
                        }
                        else
                        {
                                for(it_p = pasazerowie.begin(); it_p != pasazerowie.end(); it_p++)
                                {
                                        if((*it_p) -> get_id() == id_pasazera)
                                        {
                                                (*it_s) -> dodaj_pasazera((**it_p));
                                                break;
                                        }
                                }
                                break;
                        }   
                }
        }
}

void Menu::wypisz_pasazerow_s()
{
        unsigned int id_samochodu = wybierz_sam();

        std::vector <samochod*>::iterator it_s;
        for(it_s = samochody.begin(); it_s != samochody.end(); it_s++)
        {
                if((*it_s) -> get_id() == id_samochodu)
                {
                        std::cout << std::endl;
                        (*it_s) -> wypisz_pasazerow();
                        powrot_z_funkcji();
                }
        } 
}

void Menu::jedz_s()
{
       unsigned int id_samochodu = wybierz_sam();

        std::vector <samochod*>::iterator it_s;
        for(it_s = samochody.begin(); it_s != samochody.end(); it_s++)
        {
                if((*it_s) -> get_id() == id_samochodu)
                {
                        std::cout << std::endl;
                        (*it_s) -> jedz();
                        std::cout << (**it_s);
                        powrot_z_funkcji();
                }
        }  
}