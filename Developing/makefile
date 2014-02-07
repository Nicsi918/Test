

OBJS = ProgramVec3.o Vec3.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o program

ProgramVec3.o: ProgramVec3.cpp ../VectorUtils/Vec3.hpp
	$(CC) $(CFLAGS) ProgramVec3.cpp

Vec3.o: ../VectorUtils/Vec3.hpp ../VectorUtils/Vec3.cpp
	$(CC) $(CFLAGS) ../VectorUtils/Vec3.cpp

clean:
	\rm *.o *~ program