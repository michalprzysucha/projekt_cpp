#include <iostream>
#include <vector>
#include "pojazd.h"
#include "pasazer.h"
#include "samochod.h"
#include "rower.h"
#include "motocykl.h"
#include "menu.h"

int main()
{
    samochod o1();
    samochod o2(4, 2, 3, "Volvo", 2000, 300, 100, 20000, 5, 4, 3);
    std::cout << "test" << std::endl;
    std::cout << o2;
    Menu menu;
    menu.sczytaj_pasazerow();
}
