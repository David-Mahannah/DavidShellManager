# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
# -g    | adds debugging information to the exe
# -Wall | turn on compiler warnings 
CFLAGS = -g -Wall

main: profile.o dsm.o command_line_writer.o
	$(CC) $(CCFLAGS) -o main dsm.o profile.o command_line_writer.o

profile.o: profile.h

dsm.o: profile.h dsm.cc dsm.h
	$(CC) $(CFLAGS) -c dsm.cc

command_line_writer.o: command_line_writer.cc command_line_writer.h profile_writer.h
	$(CC) $(CFLAGS) -c command_line_writer.cc

clean:
	$(RM) main ; rm *.o
