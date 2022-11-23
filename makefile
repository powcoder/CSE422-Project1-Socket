all: Bulls_And_Cows.o proj1_server.o proj1_client.o
	g++ -g -o proj1_server proj1_server.o Bulls_And_Cows.o 
	g++ -g -o proj1_client proj1_client.o Bulls_And_Cows.o

Bulls_And_Cows.o: Bulls_And_Cows.cc Bulls_And_Cows.h
	g++ -Wall -c Bulls_And_Cows.cc

proj1_server.o: proj1_server.cc proj1_server.h packet.h Bulls_And_Cows.h
	g++ -Wall -c proj1_server.cc 

proj1_client.o: proj1_client.cc proj1_client.h packet.h Bulls_And_Cows.h 
	g++ -Wall -c proj1_client.cc 

clean:
	rm -rf proj1_server proj1_client *.o

