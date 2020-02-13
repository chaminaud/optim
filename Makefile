
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
CFLAGS= -Wall -g2 # -fPIC  -DDEBUG
LDFLAGS=
EXE=optim
CC=gcc


all: $(OBJS)
	$(CC)  $(OBJS) $(LDFLAGS) -o $(EXE)


clean: 
	rm -f core
	rm -f *.a
	rm -f *.so
	rm -f $(OBJS)
	rm -f $(EXE)

