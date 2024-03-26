BIN=./bin/main
SRC=$(wildcard ./src/*.cc)
CXXFLAGS=-Wall -Werror -Wextra -pedantic -Wshadow -Wconversion -g -Og

main: $(SRC)
	g++ -o $(BIN) $^ $(CXXFLAGS)

clean:
	rm $(BIN)
