CC = g++
CFLAGS = `pkg-config --cflags gtk+-3.0`
LDFLAGS = `pkg-config --libs gtk+-3.0`

EXEC = run
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)

$(EXEC):	$(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXEC) $(LDFLAGS)

%.o: %.cpp
	$(CC) -c $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -f $(EXEC) $(OBJECTS)
