include Makefile.config

PROJECT := feu
SRCS    := $(wildcard *.cpp)
OBJS    := $(SRCS:.cpp=.o)

include Makefile.rules
