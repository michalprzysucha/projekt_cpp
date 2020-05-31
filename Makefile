CC      	=  g++
CFLAGS  	= -O3 -Wall -c
LDFLAGS 	= -lm

.PHONY: clean clean_o

all: main.out clean_o

main.out: main.o pojazd.o pasazer.o samochod.o rower.o motocykl.o menu.o
main.o: main.cpp
pojazd.o: pojazd.cpp
pasazer.o: pasazer.cpp
samochod.o: samochod.cpp
rower.o: rower.cpp
menu.o: menu.cpp

%.out: %.o
	$(CC) -o $@ $^
	
%.o: %.cpp
	$(CC) $(CFLAGS) $<

clean:
	$(RM) *.bak *~ *.out

clean_o:
	$(RM) *.o





