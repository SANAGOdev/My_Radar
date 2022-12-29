all:
	gcc src/*.c -o prog -Iinclude -lcsfml-graphics -lcsfml-window -lcsfml-audio