OUT = game
CC = g++
SDL = -L/usr/local/lib -I/opt/X11/include -lSDL2 -lGLEW -lglfw3 -framework OpenGL
DEPEN = src/main.o src/window.o src/vec2.o src/vec3.o src/vec4.o src/mat4.o

all: $(OUT)
	rm -Rf src/*.o

$(OUT): $(DEPEN)
	$(CC) -w -o $@ $^ ${SDL}


