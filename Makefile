GXX	:= g++
CFLAGS	:= -Wall -g -Werror -lpthread -O2 -fomit-frame-pointer

SOURCES	= $(wildcard *.cpp, chapter[0123456789]*/*.cpp)
OBJECTS = $(patsubst %.cpp,%.o, $(SOURCES))

all : $(OBJECTS)
	$(GXX) $(CFLAGS) $^ -o $@

%.o : %.cpp
	$(GXX) $(CFLAGS) -c $^ -o $@

.PHONY: clean
clean:
	rm $(OBJECTS) all
