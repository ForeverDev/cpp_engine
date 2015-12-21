OUT = game
CC = g++
SDL = -L/usr/local/lib -I/opt/X11/include -lSDL2 -lGLEW -lglfw3 -lm -framework OpenGL
DEPEN = main.o window.o

all: $(OUT)
	rm -Rf *.o

$(OUT): $(DEPEN)
	$(CC) -o $@ $^ ${SDL}


