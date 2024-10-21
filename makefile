SOURCE := $(wildcard src/*.cpp)

run:
	clear
	@g++ $(SOURCE) -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system
	@./sfml-app
	@rm sfml-app