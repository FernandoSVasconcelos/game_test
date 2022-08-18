 
output: main.o character.o weapon.o
	g++ main.o character.o weapon.o -o output

main.o: main.cpp
	g++ -c main.cpp

character.o: character.cpp character.hpp
	g++ -c character.cpp

weapon.o: weapon.cpp weapon.hpp
	g++ -c weapon.cpp

clean:
	rm *.o output