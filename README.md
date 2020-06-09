* Zawartosc:
============

Projekt zawiera pliki naglowkowe z definicjami klas oraz pliki
zrodlowe implementujace metody, a takze plik main.cpp, ktory
tworzy jedynie obiekt klasy menu. Katalog zwiera rowniez
pliki z przykladowymi danymi do programu.

Projekt zawiera nastepujace klasy:
----------------------------------

I.      Klasa pojazd - bazowa dla klas samochod, rower, motocykl
II.     Klasa pasazer
III.    Klasa samochod - klasa pochodna klasy pojazd
IV.     Klasa rower - klasa pochodna klasy pojazd
V.      Klasa motocykl - klasa pochodna klasy pojazd
VI.     Klasa menu

Co robi program?
================

Program jest pewnego rodzaju baza danych przechowujaca
informacje o pojazdach i pasazerach. Moze przechowywac dane o
samochodach, motorach i rowerach. Informacje o poszczegolnych
pojazdach, a takze o pasazerach mozna dodawac z poziomu konsoli 
lub sczytywac z odpowiednich plikow(pliki rower.txt, 
motocykl.txt, samochod.txt, pasazer.txt).
Program umozliwa m.in.: przypisywanie pasazerow do pojazdow,
wprawianie pojazdow w ruch, sprawdzanie stanu paliwa.

Jak poslugiwac sie programem?
=============================

Najpierw nalezy otworzyc temrinal i skompilowac program przy uzyciu
polecenia make. Nastepnie uruchamiamy program podajac:
./main.out

Po uruchomieniu programu wyswietli sie menu glowne. Aby przejsc do opcji
konkretnego pojazdu lub pasazera nalezy podac odpowiedni numer.
Aby moc wykonywac wiekszosc operacji najpierw nalezy wczytac dane do
programu. Mozemy to zrobic w dwojaki sposob: sczytac dane z pliku
lub dodac je z poziomu konsoli wybierajac np. "Dodaj pasazera". Gdy wczytamy
juz dane to mozemy je wypisac wybierajac np. "Wypisz wszystkie samochody z
bazy" - opcja ta spowoduje wypisanie informacji o wszystkich autach
przechowywanych w programie. Program pozwala na przypisywanie pasazerow
do poszczegolnych pojazdow. Wybierajac np. opcje "Dodaj pasazera do
samochodu" uzytkownik zostanie poproszony o wybor pasazera z dostepnych
poprzez podanie jego ID. Nastepnie trzeba bedzie wybrac konkretne auto do
ktorego chcemy dodac wybranego pasazera rowniez podajac jego ID z
dostepnych. Po dokonaniu tej operacji bedzie mozna wyswietlic pasazerow
danego auta wybierajac opcje "Wypisz pasazerow auta" z menu "Akcje
samochodu". Na podobnej zasadzie dzialaja operacje typu "Jedz", "Zatrzymaj
sie", "Zatanakuj" itd. - uzytkownik zostanie poproszony o wybor konkretnego
pojazdu, a nastepnie zostanie wykonane zadane dzialanie.