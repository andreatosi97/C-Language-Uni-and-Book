LIBS_DIR = C:\Users\Andrea\Documents\ANDREA\CODING\Languages\C\Uni-and-Book-Exs\Course-Exs\lib
CC = gcc
FLAGS = -g -O0 -L$(LIBS_DIR) -I$(LIBS_DIR) -ladvanced -lbasic -lm

ARCHIVES = $(LIBS_DIR)\libbasic.a $(LIBS_DIR)\libadvanced.a

%.o: %.c
	$(CC) -g -O0 -o $@ -c $< -Wall

B_HEADERS = $(shell dir /B /S $(LIBS_DIR)\basic\*.h)
B_SOURCES = $(shell dir /B /S $(LIBS_DIR)\basic\*.c)

A_HEADERS = $(shell dir /B /S $(LIBS_DIR)\advanced\*.h)
A_SOURCES = $(shell dir /B /S $(LIBS_DIR)\advanced\*.c)

B_OBJS = $(B_SOURCES:.c=.o)
A_OBJS = $(A_SOURCES:.c=.o)

$(LIBS_DIR)\libbasic.a: $(B_HEADERS) $(B_OBJS)
	ar rcs $(LIBS_DIR)\libbasic.a $(B_OBJS)

$(LIBS_DIR)\libadvanced.a: $(A_HEADERS) $(A_OBJS)
	ar rcs $(LIBS_DIR)\libadvanced.a $(A_OBJS)

EX_LIST = $(wildcard */)
COMMANDS = $(EX_LIST:/=)
EXECS = $(EX_LIST:/=.exe)

.PHONY: $(COMMANDS) all

$(COMMANDS): % : %.exe
all: $(COMMANDS)

.SECONDEXPANSION:
$(EXECS): %.exe : $(ARCHIVES) $(wildcard %/*.c)
	$(CC) -o $@ $*/*.c $(FLAGS)

clean:
	del /s ..\*.o
	del /s ..\*.a
clean-exec:
	del $(EXECS)