CC=g++
CFLAGS= -g -Wall -ansi

clean:
	 rm -f main.o calender.o day.o
	 rm -f calender.out

calender.out: main.o calender.0 day.0
	$(CC) $(CFLAGS) -o calender.out main.o calender.o day.o

main.o: main.cpp calender.h day.h
	$(CC) $(CFLAGS) -c main.cpp

calender.o: calender.cpp calender.h day.h
	$(CC) $(CFLAGS) -c calender.cpp

day.o: day.cpp day.h appt.h
	$(CC) $(CFLAGS) -c day.cpp

