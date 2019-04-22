random: main.o randBase.o randString.o
	g++ main.o randBase.o randString.o -std=c++11 -o bin/random && rm -rf *.o

main.o: main.cpp include/randBase.hpp
	g++ -c main.cpp -std=c++11

randBase.o: include/randBase.hpp src/randBase.cpp
	g++ -c src/randBase.cpp -std=c++11

randString.o: include/randString.hpp src/randString.cpp
	g++ -c src/randString.cpp -std=c++11