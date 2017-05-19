Main:	Main.o Obras.o Literatura.o Esculturas.o Pinturas.o DisenosA.o
	g++ Main.o Obras.o Literatura.o Esculturas.o Pinturas.o DisenosA.o -o main

Main.o:	Main.cpp Obras.h Literatura.h Esculturas.h Pinturas.h DisenosA.h
	g++ -c Main.cpp

Obras.o:	Obras.cpp Obras.h
	g++ -c Obras.cpp

Literatura.o:	Literatura.cpp Literatura.h Obras.h
	g++ -c Literatura.cpp

Esculturas.o:	Esculturas.cpp Esculturas.h Obras.h
	g++ -c Esculturas.cpp

Pinturas.o:	Pinturas.cpp Pinturas.h Obras.h
	g++ -c Pinturas.cpp

DisenosA.o:	DisenosA.cpp DisenosA.h Obras.h
	g++ -c DisenosA.cpp

