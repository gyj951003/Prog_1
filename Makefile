CC=g++
CFLAGS= -g -Wall -ansi

clean:
	 rm -f main.o calendar.o day.o
	 rm -f calendar.out

calendar.out: main.o calendar.o day.o
	$(CC) $(CFLAGS) -o calendar.out main.o calendar.o day.o

main.o: main.cpp calendar.h day.h
	$(CC) $(CFLAGS) -c main.cpp

calendar.o: calendar.cpp calendar.h day.h
	$(CC) $(CFLAGS) -c calendar.cpp

day.o: day.cpp day.h appt.h
	$(CC) $(CFLAGS) -c day.cpp

