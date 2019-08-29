all: monday

monday: monday.cc
	g++ -Wall -ggdb3 -Werror -std=c++11 -o test_treemap test_treemap.cc -pthread -lgtest

clean:

	rm -f  *.o output
	rm -f  monday	
