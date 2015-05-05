GXX		:= g++
CPPFLAGS	:= -Wall -g -Werror -lpthread -O2 -fomit-frame-pointer

SOURCES	= $(wildcard *.cpp, chapter[0-9]*/*.cpp)
OBJECTS = $(patsubst %.cpp,%, $(SOURCES))

all : $(OBJECTS)

% : %.cpp
	$(GXX) $(CPPFLAGS) $^ -o $@

.PHONY: clean
clean:
	rm $(OBJECTS) all
