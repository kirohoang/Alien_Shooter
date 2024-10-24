ENTITY := $(wildcard src/entities/*.cpp)
FUNC := $(wildcard src/func/*.cpp)
GUI := $(wildcard src/gui/*.cpp)
MAIN := src/main.cpp
CXXFLAGS := -lsfml-graphics -lsfml-window -lsfml-system

run:
	time g++ $(ENTITY) $(FUNC) $(GUI) $(MAIN) -o sfml-app $(CXXFLAGS)
	./sfml-app
	rm sfml-app