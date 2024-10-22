ENTITY := $(wildcard src/entities/*.cpp)
FUNC := $(wildcard src/func/*.cpp)
GUI := $(wildcard src/gui/*.cpp)
MAIN := $(wildcard src/main.cpp)

run:
	clear
	g++ $(ENTITY) $(FUNC) $(GUI) $(MAIN)  -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	./sfml-app
	rm sfml-app