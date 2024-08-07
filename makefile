phanso: phanso.o main.o
	g++ phanso.o main.o -o phanso

phanso.o: phanso.cpp
	g++ -c phanso.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o phanso