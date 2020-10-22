#
# This is a Makefile for Clementine program.  
# Typing 'make' or 'make default' will create the executable file.
#

# define some Makefile variables for the compiler and compiler flags
# to use Makefile variables later in the Makefile: $()
#
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings
#
# for C++ define  CC = g++
CC = g++
#CFLAGS  = -g -Wall
CFLAGS	= -c

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#
default: Driver.out

# To create the executable file we need the object files
# the following line simply links together the .o files into the final .out file
Driver.out:  Driver.o Card.o DeckOfCards.o
	
	$(CC) $(CFLAGS) -o Driver.out Driver.o Card.o DeckOfCards.o 


# We create the object file Clementine.o, if any of the source
# files (Clemetine.cpp and all local .h files referenced in it)
# are newer than Clementine.o
Driver.o:  Driver.cpp Card.h DeckOfCards.h 
	$(CC) $(CFLAGS) -c Driver.cpp

# To create the object file Register.o, we need the source
# files Register.c, Register.h:
#
Card.o: Card.cpp Card.h 
	$(CC) $(CFLAGS) -c Card.cpp

# To create the object file Retirement.o, we need the source files
# Retirement.cpp and Retirement.h:
#
DeckOfCards.o:  DeckOfCards.cpp DeckOfCards.h 
	$(CC) $(CFLAGS) -c DeckOfCards.cpp

# To create the object file Loan.o, we need the source files
# Loan.cpp and Loan.h:
#


clean: 
	$(RM) *.out *.o *~

# run the executable
run:
	./Driver.out
