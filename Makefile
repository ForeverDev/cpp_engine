OUT = game
CC = g++
CF = -c -w
SDL = -L/usr/local/lib -I/opt/X11/include -lSDL2 -lGLEW -lglfw3 -framework OpenGL
DEPEN = src/main.o src/window.o src/vec2.o src/vec3.o src/vec4.o src/mat4.o

all: $(OUT) clean

$(OUT): $(DEPEN)
	$(CC) $(SDL) -o $@ $^

%.o: %.cpp
	g++ $(CF) $*.cpp -o $*.o

clean:
	rm -Rf src/*.o
