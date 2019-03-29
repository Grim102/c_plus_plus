random-quotes: main.o API.o
	g++ main.o API.o -std=c++11 -lboost_system -lpthread -o bin/random-quotes && rm -f *.o

main.o: main.cpp include/API.hpp
	g++ -c main.cpp -std=c++11

API.o: include/API.hpp src/API.cpp
	g++ -c src/API.cpp -std=c++11 -lboost_system -lpthread

