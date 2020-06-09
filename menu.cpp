#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <algorithm>
#include "menu.h"

Menu::Menu()
{
}

Menu::~Menu()
{
}

int Menu::get_stan()
{
        return aktualny_stan;
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
    std::cout << "3. Wypisz wszystkich pasazerow z bazy"      << std::endl;
    std::cout << "4. Posortuj pasazerow"                      << std::endl;
    std::cout << "5. Wroc"                                    << std::endl;
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
    std::cout << "10. Wypisz wszystkie samochody z bazy"      << std::endl;
    std::cout << "11. Wroc"                                   << std::endl;
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
    std::cout << "9. Wypisz wszystke motocykle z bazy"        << std::endl;
    std::cout << "10. Wroc"                                   << std::endl;
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
    std::cout << "7. Wypisz wszystkie rowery z bazy"          << std::endl;
    std::cout << "8. Wroc"                                    << std::endl;
    std::cout                                                 << std::endl;
    std::cout <<"===========================================" << std::endl;
}

void Menu::wyjdz()
{
    wyczysc_ekran();
    exit(0);
}

void Menu::wroc()
{
    wyczysc_ekran();
    print_main_menu();
}

void Menu::wyczysc_ekran()
{
    printf("\033c");
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
        switch(aktualny_stan)
        {
            case m_glowne:
                    wyczysc_ekran();
                    print_main_menu();
                    std::cout << "\nProsze wybrac opcje" << std::endl;
                    std::cin >> wybor;

                    switch(wybor)
                    {
                        case 1:
                                aktualny_stan = m_pasazer;
                                break;

                        case 2:
                                aktualny_stan = m_samochod;
                                break;

                        case 3:
                                aktualny_stan = m_motocykl;
                                break;
                        
                        case 4:
                                aktualny_stan = m_rower;
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
                                dodaj_pasazera();
                                break;

                        case 2:
                                sczytaj_pasazerow();
                                powrot_z_funkcji();
                                wyczysc_ekran();
                                break;

                        case 3:
                                wypisz_wszystkich_p();
                                break;

                        case 4:
                                posortuj_wg_wieku();
                                break;

                        case 5:
                                aktualny_stan = m_glowne;
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
                                dodaj_samochod();
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
                                cofaj_sie();
                                break;

                        case 7:
                                zatrzymaj_sie_s();
                                break;

                        case 8:
                                sprawdz_stan_paliwa_s();
                                break;

                        case 9:
                                zatankuj_s();
                                break;

                        case 10:
                                wypisz_wszystkie_s();
                                break;
                                
                        case 11:
                                aktualny_stan = m_glowne;
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
                                dodaj_motocykl();
                                break;

                        case 2:
                                sczytaj_motory();
                                powrot_z_funkcji();
                                wyczysc_ekran();
                                break;

                        case 3:
                                dodaj_pasazera_m();
                                break;

                        case 4:
                                wypisz_pasazerow_m();
                                break;

                        case 5:
                                jedz_m();
                                break;

                        case 6:
                                zatrzymaj_sie_m();
                                break;

                        case 7:
                                sprawdz_stan_paliwa_m();
                                break;

                        case 8:
                                zatankuj_m();
                                break;

                        case 9:
                                wypisz_wszystkie_m();
                                break;

                        case 10:
                                aktualny_stan = m_glowne;
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
                                dodaj_rower();
                                break;

                        case 2:
                                sczytaj_rowery();
                                powrot_z_funkcji();
                                wyczysc_ekran();
                                break;

                        case 3:
                                dodaj_pasazera_r();
                                break;

                        case 4:
                                wypisz_pasazerow_r();
                                break;

                        case 5:
                                jedz_r();
                                break;
                        
                        case 6:
                                zatrzymaj_sie_r();
                                break;
                        
                        case 7:
                                wypisz_wszystkie_r();
                                break;

                        case 8:
                                aktualny_stan = m_glowne;
                                wroc();
                                break;
                    }
                    break;          
        }
    }
    
}

void Menu::wypisz_wszystkich_p()
{
        std::vector <pasazer*>::iterator it;

        wyczysc_ekran();
        if(pasazerowie.empty())
        {
                std::cout << "Brak pasazerow w bazie" << std::endl;
                powrot_z_funkcji();
                pobierz_wybor(get_stan());
        }

        for(it = pasazerowie.begin(); it != pasazerowie.end(); it++)
        {
           std::cout << **it;    
        }
        powrot_z_funkcji();
}

void Menu::wypisz_wszystkie_s()
{
        std::vector <samochod*>::iterator it;

        wyczysc_ekran();
        if(samochody.empty())
        {
                std::cout << "Brak samochodow w bazie" << std::endl;
                powrot_z_funkcji();
                pobierz_wybor(get_stan());
        }

        for(it = samochody.begin(); it != samochody.end(); it++)
        {
           std::cout << **it;    
        }
        powrot_z_funkcji();
}

void Menu::wypisz_wszystkie_m()
{
        std::vector <motocykl*>::iterator it;

        wyczysc_ekran();
        if(motocykle.empty())
        {
                std::cout << "Brak motorow w bazie" << std::endl;
                powrot_z_funkcji();
                pobierz_wybor(get_stan());
        }

        for(it = motocykle.begin(); it != motocykle.end(); it++)
        {
           std::cout << **it;    
        }
        powrot_z_funkcji();
}

void Menu::wypisz_wszystkie_r()
{
        std::vector <rower*>::iterator it;

        wyczysc_ekran();
        if(rowery.empty())
        {
                std::cout << "Brak rowerow w bazie" << std::endl;
                powrot_z_funkcji();
                pobierz_wybor(get_stan());
        }

        for(it = rowery.begin(); it != rowery.end(); it++)
        {
           std::cout << **it;    
        }
        powrot_z_funkcji();
}

void Menu::sczytaj_pasazerow()
{
    std::ifstream input("pasazerowie.txt");
    std::string imie, nazwisko, preferowany_transport;
    int wiek;
    int i;
    double wzrost;

    wyczysc_ekran();
    if(pasazerowie.empty())
    {
        i = 0;
    }
    else
    {
        i = pasazerowie.back() -> get_id();
    }
    
    while(input >> imie >> nazwisko >> wzrost >> wiek >> preferowany_transport)
    {
        pasazerowie.push_back(new pasazer(wiek, wzrost, imie, nazwisko, preferowany_transport));
        pasazerowie[i] -> ustaw_id(i + 1);
        std::cout << *pasazerowie[i] << std::endl;
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

    wyczysc_ekran();
    if(samochody.empty())
    {
        i = 0;
    }
    else
    {
        i = samochody.back() -> get_id();
    }
    while(input >> marka >> pojemnosc_baku >> stan_baku >> przebieg >> srednie_spalanie >> rok_produkcji >> liczba_miejsc >> liczba_wolnych_miejsc >> liczba_kol >> cisnienie_w_oponach >> max_cisnienie_opon)
    {
        samochody.push_back(new samochod(liczba_kol, cisnienie_w_oponach, max_cisnienie_opon, rok_produkcji, liczba_miejsc, liczba_wolnych_miejsc, pojemnosc_baku, stan_baku, przebieg, srednie_spalanie, marka));
        samochody[i] -> ustaw_id(i + 1);
        std::cout << *samochody[i] << std::endl;
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

    wyczysc_ekran();
    if(motocykle.empty())
    {
        i = 0;
    }
    else
    {
        i = motocykle.back() -> get_id();
    }
    while(input >> marka >> pojemnosc_baku >> stan_baku >> przebieg >> srednie_spalanie >> rok_produkcji >> liczba_kol >> cisnienie_w_oponach >> max_cisnienie_opon)
    {
        motocykle.push_back(new motocykl(liczba_kol, cisnienie_w_oponach, max_cisnienie_opon, rok_produkcji, pojemnosc_baku, stan_baku, przebieg, srednie_spalanie, marka));
        motocykle[i] -> ustaw_id(i + 1);
        std::cout << *motocykle[i] << std::endl;
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

    wyczysc_ekran();
    if(rowery.empty())
    {
        i = 0;
    }
    else
    {
        i = rowery.back() -> get_id();
    }
    while(input >> marka >> rodzaj >> rok_produkcji >> wielkosc_ramy >> liczba_kol >> cisnienie_w_oponach >> max_cisnienie_opon)
    {
        rowery.push_back(new rower(liczba_kol, cisnienie_w_oponach, max_cisnienie_opon, rok_produkcji, wielkosc_ramy, marka, rodzaj));
        rowery[i] -> ustaw_id(i + 1);
        std::cout << *rowery[i] << std::endl;
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
                powrot_z_funkcji();
                pobierz_wybor(get_stan());
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
                powrot_z_funkcji();
                pobierz_wybor(get_stan());
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
                powrot_z_funkcji();
                pobierz_wybor(get_stan());
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
                powrot_z_funkcji();
                pobierz_wybor(get_stan());
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

        wyczysc_ekran();
        for(it_s = samochody.begin(); it_s != samochody.end(); it_s++)
        {
                if((*it_s) -> get_id() == id_samochodu)
                {
                        if((*it_s) -> sprawdz_wolne_miejsca() == 0)
                        {
                                std::cout << "Brak wolnych miejsc" << std::endl;
                                powrot_z_funkcji();
                                pobierz_wybor(get_stan());
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

        wyczysc_ekran();
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

        wyczysc_ekran();
        for(it_s = samochody.begin(); it_s != samochody.end(); it_s++)
        {
                if((*it_s) -> get_id() == id_samochodu)
                {
                        std::cout << std::endl;
                        if((*it_s) -> sprawdz_stan_paliwa() == 0)
                        {
                                std::cout << "Brak paliwa. Prosze najpierw zatankowac auto" << std::endl;
                                powrot_z_funkcji();
                                pobierz_wybor(get_stan());
                        }
                        (*it_s) -> jedz();
                        std::cout << "\nPrzebieg auta po przejechaniu trasy: " << (*it_s) -> get_przebieg() << std::endl;
                        std::cout << "Stan baku po przejechaniu trasy: " << (*it_s) -> sprawdz_stan_paliwa() << std::endl << std::endl;
                        powrot_z_funkcji();
                }
        }  
}

void Menu::cofaj_sie()
{
        unsigned int id_samochodu = wybierz_sam();
        std::vector <samochod*>::iterator it_s;

        wyczysc_ekran();
        for(it_s = samochody.begin(); it_s != samochody.end(); it_s++)
        {
                if((*it_s) -> get_id() == id_samochodu)
                {
                        std::cout << std::endl;
                        if((*it_s) -> sprawdz_stan_paliwa() == 0)
                        {
                                std::cout << "Brak paliwa. Prosze najpierw zatankowac auto" << std::endl;
                                powrot_z_funkcji();
                                pobierz_wybor(get_stan());
                        }
                        (*it_s) -> cofaj_sie();
                        std::cout << "\nPrzebieg auta po przejechaniu trasy: " << (*it_s) -> get_przebieg() << std::endl;
                        std::cout << "Stan baku po przejechaniu trasy: " << (*it_s) -> sprawdz_stan_paliwa() << std::endl << std::endl;
                        powrot_z_funkcji();
                }
        }    
}

void Menu::zatrzymaj_sie_s()
{
        unsigned int id_samochodu = wybierz_sam();
        std::vector <samochod*>::iterator it_s;

        wyczysc_ekran();
        for(it_s = samochody.begin(); it_s != samochody.end(); it_s++)
        {
                if((*it_s) -> get_id() == id_samochodu)
                {
                        std::cout << std::endl;
                        (*it_s) -> zatrzymaj_sie();
                        std::cout << "\nAuto o ID: " << id_samochodu << " zostalo zatrzymane" << std::endl << std::endl;
                        powrot_z_funkcji();
                }
        }       
}

void Menu::sprawdz_stan_paliwa_s()
{
        unsigned int id_samochodu = wybierz_sam();
        std::vector <samochod*>::iterator it_s;

        wyczysc_ekran();
        for(it_s = samochody.begin(); it_s != samochody.end(); it_s++)
        {
                if((*it_s) -> get_id() == id_samochodu)
                {
                        std::cout << std::endl;
                        std::cout << "Aktualny stan paliwa dla tego pojazdu wynosi: " << (*it_s) -> sprawdz_stan_paliwa() << std::endl;
                        powrot_z_funkcji();
                }
        }       
}

void Menu::zatankuj_s()
{
        unsigned int id_samochodu = wybierz_sam();
        double paliwo;
        std::vector <samochod*>::iterator it_s;

        wyczysc_ekran();
        std::cout << "Ile litrow paliwa chcesz zatankowac?" << std::endl;
        std::cin >> paliwo;

        for(it_s = samochody.begin(); it_s != samochody.end(); it_s++)
        {
                if((*it_s) -> get_id() == id_samochodu)
                {
                        std::cout << std::endl;
                        (*it_s) -> zatankuj(paliwo);
                        std::cout << "Aktualny stan paliwa wynosi teraz: " << (*it_s) -> sprawdz_stan_paliwa() << std::endl << std::endl;
                        powrot_z_funkcji();
                }
        }  
}

void Menu::dodaj_pasazera_m()
{
        unsigned int id_pasazera = wybierz_pasazera();
        unsigned int id_motora = wybierz_motoc();
        std::vector <motocykl*>::iterator it_m;
        std::vector <pasazer*>::iterator it_p;

        wyczysc_ekran();
        for(it_m = motocykle.begin(); it_m != motocykle.end(); it_m++)
        {
                if((*it_m) -> get_id() == id_motora)
                {
                        if((*it_m) -> get_czy_wolne() == false)
                        {
                                std::cout << "Brak wolnych miejsc" << std::endl;
                                powrot_z_funkcji();
                                pobierz_wybor(get_stan());
                        }
                        else
                        {
                                for(it_p = pasazerowie.begin(); it_p != pasazerowie.end(); it_p++)
                                {
                                        if((*it_p) -> get_id() == id_pasazera)
                                        {
                                                (*it_m) -> dodaj_pasazera((**it_p));
                                                (*it_m) -> set_czy_wolne(false);
                                                break;
                                        }
                                }
                                break;
                        }   
                }
        }  
}

void Menu::wypisz_pasazerow_m()
{
        unsigned int id_motora = wybierz_motoc();
        std::vector <motocykl*>::iterator it_m;

        wyczysc_ekran();
        for(it_m = motocykle.begin(); it_m != motocykle.end(); it_m++)
        {
                if((*it_m) -> get_id() == id_motora)
                {
                        std::cout << std::endl;
                        (*it_m) -> wypisz_pasazerow();
                        powrot_z_funkcji();
                }
        } 
}

void Menu::jedz_m()
{
        unsigned int id_motora = wybierz_motoc();
        std::vector <motocykl*>::iterator it_m;

        wyczysc_ekran();
        for(it_m = motocykle.begin(); it_m != motocykle.end(); it_m++)
        {
                if((*it_m) -> get_id() == id_motora)
                {
                        std::cout << std::endl;
                        if((*it_m) -> sprawdz_stan_paliwa() == 0)
                        {
                                std::cout << "Brak paliwa. Prosze najpierw zatankowac motor" << std::endl;
                                powrot_z_funkcji();
                                pobierz_wybor(get_stan());
                        }
                        (*it_m) -> jedz();
                        std::cout << "\nPrzebieg motora po przejechaniu trasy: " << (*it_m) -> get_przebieg() << std::endl;
                        std::cout << "Stan baku po przejechaniu trasy: " << (*it_m) -> sprawdz_stan_paliwa() << std::endl << std::endl;
                        powrot_z_funkcji();
                }
        }  
}

void Menu::zatrzymaj_sie_m()
{
        unsigned int id_motora = wybierz_motoc();
        std::vector <motocykl*>::iterator it_m;

        wyczysc_ekran();
        for(it_m = motocykle.begin(); it_m != motocykle.end(); it_m++)
        {
                if((*it_m) -> get_id() == id_motora)
                {
                        std::cout << std::endl;
                        (*it_m) -> zatrzymaj_sie();
                        std::cout << "\nMotocykl o ID: " << id_motora << " zostal zatrzymane" << std::endl << std::endl;
                        powrot_z_funkcji();
                }
        }       
}

void Menu::sprawdz_stan_paliwa_m()
{
        unsigned int id_motora = wybierz_motoc();
        std::vector <motocykl*>::iterator it_m;

        wyczysc_ekran();
        for(it_m = motocykle.begin(); it_m != motocykle.end(); it_m++)
        {
                if((*it_m) -> get_id() == id_motora)
                {
                        std::cout << std::endl;
                        std::cout << "Aktualny stan paliwa dla tego pojazdu wynosi: " << (*it_m) -> sprawdz_stan_paliwa() << std::endl;
                        powrot_z_funkcji();
                }
        }       
}

void Menu::zatankuj_m()
{
        unsigned int id_motora = wybierz_motoc();
        double paliwo;
        std::vector <motocykl*>::iterator it_m;

        wyczysc_ekran();
        std::cout << "Ile litrow paliwa chcesz zatankowac?" << std::endl;
        std::cin >> paliwo;

        for(it_m = motocykle.begin(); it_m != motocykle.end(); it_m++)
        {
                if((*it_m) -> get_id() == id_motora)
                {
                        std::cout << std::endl;
                        (*it_m) -> zatankuj(paliwo);
                        std::cout << "Aktualny stan paliwa wynosi teraz: " << (*it_m) -> sprawdz_stan_paliwa() << std::endl << std::endl;
                        powrot_z_funkcji();
                }
        }  
}

void Menu::dodaj_pasazera_r()
{
        unsigned int id_pasazera = wybierz_pasazera();
        unsigned int id_roweru = wybierz_rower();
        std::vector <rower*>::iterator it_r;
        std::vector <pasazer*>::iterator it_p;

        wyczysc_ekran();
        for(it_r = rowery.begin(); it_r != rowery.end(); it_r++)
        {
                if((*it_r) -> get_id() == id_roweru)
                {
                        if((*it_r) -> get_czy_wolne() == false)
                        {
                                std::cout << "Brak wolnych miejsc" << std::endl;
                                powrot_z_funkcji();
                                pobierz_wybor(get_stan());
                        }
                        else
                        {
                                for(it_p = pasazerowie.begin(); it_p != pasazerowie.end(); it_p++)
                                {
                                        if((*it_p) -> get_id() == id_pasazera)
                                        {
                                                (*it_r) -> dodaj_pasazera((**it_p));
                                                (*it_r) -> set_czy_wolne(false);
                                                break;
                                        }
                                }
                                break;
                        }   
                }
        }  
}

void Menu::wypisz_pasazerow_r()
{
        unsigned int id_roweru = wybierz_rower();
        std::vector <rower*>::iterator it_r;

        wyczysc_ekran();
        for(it_r = rowery.begin(); it_r != rowery.end(); it_r++)
        {
                if((*it_r) -> get_id() == id_roweru)
                {
                        std::cout << std::endl;
                        (*it_r) -> wypisz_pasazerow();
                        powrot_z_funkcji();
                }
        } 
}

void Menu::jedz_r()
{
        unsigned int id_roweru = wybierz_rower();
        std::vector <rower*>::iterator it_r;

        wyczysc_ekran();
        for(it_r = rowery.begin(); it_r != rowery.end(); it_r++)
        {
                if((*it_r) -> get_id() == id_roweru)
                {
                        (*it_r) -> jedz();
                        std::cout << "Rower zostal wprawiony w ruch!" << std::endl;
                        powrot_z_funkcji();
                }
        }  
}

void Menu::zatrzymaj_sie_r()
{
        unsigned int id_roweru = wybierz_rower();
        std::vector <rower*>::iterator it_r;

        wyczysc_ekran();
        for(it_r = rowery.begin(); it_r != rowery.end(); it_r++)
        {
                if((*it_r) -> get_id() == id_roweru)
                {
                        std::cout << std::endl;
                        (*it_r) -> zatrzymaj_sie();
                        std::cout << "\nRower o ID: " << id_roweru << " zostal zatrzymany" << std::endl << std::endl;
                        powrot_z_funkcji();
                }
        }       
}

void Menu::posortuj_wg_wieku()
{
        wyczysc_ekran();
        std::sort(pasazerowie.begin(), pasazerowie.end(), porownaj);
        if(pasazerowie.empty())
        {
                std::cout << "Brak pasazerow do posortowania" << std::endl;
                powrot_z_funkcji();
                pobierz_wybor(get_stan());
        }
        std::cout << "Posortowano pasazerow wg wieku" << std::endl;
        powrot_z_funkcji();
}

void Menu::dodaj_pasazera()
{
        unsigned int pasazer_id; 
        int wiek;
        double wzrost;
        std::string imie;
        std::string nazwisko;
        std::string preferowany_transport;

        wyczysc_ekran();
        std::cout << "Podaj imie pasazera: " << std::endl;
        std::cin >> imie;
        std::cout << "Podaj nazwisko pasazera: " << std::endl;
        std::cin >> nazwisko;
        std::cout << "Podaj wiek pasazera: " << std::endl;
        std::cin >> wiek;
        std::cout << "Podaj wzrost pasazera: " << std::endl;
        std::cin >> wzrost;
        std::cout << "Podaj preferowany transport pasazera: " << std::endl;
        std::cin >> preferowany_transport;

        if(pasazerowie.empty())
        {
                pasazer_id = 1;
        }
        else
        {
                pasazer_id = pasazerowie.back() -> get_id() + 1;
        }
        
        pasazer *p = new pasazer(wiek, wzrost, imie, nazwisko, preferowany_transport);
        p -> ustaw_id(pasazer_id);
        pasazerowie.push_back(p);

        wyczysc_ekran();
        std::cout << "Pomyslnie dodano pasazera" << std::endl;
        powrot_z_funkcji();
}

void Menu::dodaj_samochod()
{
        int samochod_id;
        int rok_produkcji;
	int liczba_miejsc;
	int liczba_wolnych_miejsc;
        int liczba_kol = 4;
	double cisnienie_w_oponach;							// w barach
	double max_cisnienie_opon;
	double pojemnosc_baku;
	double stan_baku;
	double przebieg;
	double srednie_spalanie;						// litry na 100 km
	std::string marka;

        wyczysc_ekran();
        std::cout << "Podaj marke samochodu: " << std::endl;
        std::cin >> marka;
        std::cout << "Podaj rok produkcji: " << std::endl;
        std::cin >> rok_produkcji;
        std::cout << "Podaj liczbe miejsc: " << std::endl;
        std::cin >> liczba_miejsc;
        std::cout << "Podaj liczbe wolnych miejsc: " << std::endl;
        std::cin >> liczba_wolnych_miejsc;
        std::cout << "Podaj stan cisnienia w opon auta: " << std::endl;
        std::cin >> cisnienie_w_oponach;
        std::cout << "Podaj maksymalne cisnienie opon: " << std::endl;
        std::cin >> max_cisnienie_opon;
        std::cout << "Podaj pojemnosc baku: " << std::endl;
        std::cin >> pojemnosc_baku;
        std::cout << "Podaj stan baku: " << std::endl;
        std::cin >> stan_baku;
        std::cout << "Podaj przebieg auta: " << std::endl;
        std::cin >> przebieg;
        std::cout << "Podaj srednie spalanie auta: " << std::endl;
        std::cin >> srednie_spalanie;

        if(pasazerowie.empty())
        {
                samochod_id = 1;
        }
        else
        {
                samochod_id = samochody.back() -> get_id() + 1;
        }
        
        samochod *s = new samochod(liczba_kol, cisnienie_w_oponach, max_cisnienie_opon, rok_produkcji, liczba_miejsc, liczba_wolnych_miejsc, pojemnosc_baku, stan_baku, przebieg, srednie_spalanie, marka);
        s -> ustaw_id(samochod_id);
        samochody.push_back(s);

        wyczysc_ekran();
        std::cout << "Pomyslnie dodano samochod" << std::endl;
        powrot_z_funkcji();
}

void Menu::dodaj_motocykl()
{
        int motocykl_id;
        int liczba_kol;
        int rok_produkcji;
	double pojemnosc_baku;
	double stan_baku;
	double przebieg;
	double srednie_spalanie;
        double cisnienie_w_oponach;							// w barach
	double max_cisnienie_opon;
	std::string marka;

        wyczysc_ekran();
        std::cout << "Podaj marke motocyklu: " << std::endl;
        std::cin >> marka;
        std::cout << "Podaj rok produkcji: " << std::endl;
        std::cin >> rok_produkcji;
        std::cout << "Podaj liczbe kol: " << std::endl;
        std::cin >> liczba_kol;
        std::cout << "Podaj stan cisnienia w oponach: " << std::endl;
        std::cin >> cisnienie_w_oponach;
        std::cout << "Podaj maksymalne cisnienie opon: " << std::endl;
        std::cin >> max_cisnienie_opon;
        std::cout << "Podaj pojemnosc baku: " << std::endl;
        std::cin >> pojemnosc_baku;
        std::cout << "Podaj stan baku: " << std::endl;
        std::cin >> stan_baku;
        std::cout << "Podaj przebieg motocyklu: " << std::endl;
        std::cin >> przebieg;
        std::cout << "Podaj srednie spalanie motocyklu: " << std::endl;
        std::cin >> srednie_spalanie;

        if(motocykle.empty())
        {
                motocykl_id = 1;
        }
        else
        {
                motocykl_id = motocykle.back() -> get_id() + 1;
        }
        
        motocykl *m = new motocykl(liczba_kol, cisnienie_w_oponach, max_cisnienie_opon, rok_produkcji, pojemnosc_baku, stan_baku, przebieg, srednie_spalanie, marka);
        m -> ustaw_id(motocykl_id);
        motocykle.push_back(m);

        wyczysc_ekran();
        std::cout << "Pomyslnie dodano motocykl" << std::endl;
        powrot_z_funkcji();
}

void Menu::dodaj_rower()
{
        int rower_id;
        int rok_produkcji;
        int liczba_kol;
	double cisnienie_w_oponach;							// w barach
	double max_cisnienie_opon;
        double wielkosc_ramy;
	std::string marka;
        std::string rodzaj;

        wyczysc_ekran();
        std::cout << "Podaj marke roweru: " << std::endl;
        std::cin >> marka;
        std::cout << "Podaj rodzaj roweru (np. gorski): " << std::endl;
        std::cin >> rodzaj;
        std::cout << "Podaj liczbe kol: " << std::endl;
        std::cin >> liczba_kol;
        std::cout << "Podaj stan cisnienia w oponach: " << std::endl;
        std::cin >> cisnienie_w_oponach;
        std::cout << "Podaj maksymalne cisnienie opon: " << std::endl;
        std::cin >> max_cisnienie_opon;
        std::cout << "Rok produkcji: " << std::endl;
        std::cin >> rok_produkcji;
        std::cout << "Podaj wielkosc ramy w calach: " << std::endl;
        std::cin >> wielkosc_ramy;

        if(rowery.empty())
        {
                rower_id = 1;
        }
        else
        {
                rower_id = motocykle.back() -> get_id() + 1;
        }
        
        rower *r = new rower(liczba_kol, cisnienie_w_oponach, max_cisnienie_opon, rok_produkcji, wielkosc_ramy, marka, rodzaj);
        r -> ustaw_id(rower_id);
        rowery.push_back(r);

        wyczysc_ekran();
        std::cout << "Pomyslnie dodano rower" << std::endl;
        powrot_z_funkcji();
}

bool porownaj(pasazer *p1, pasazer *p2)
{
        return p1 -> sprawdz_wiek_pasazera() < p2 -> sprawdz_wiek_pasazera();
}