CC = gcc
CFLAGS = -Wall -std=c99


legacyCalculator: main.o conversions.o drawGraph.o sExtension.o
	$(CC) $(CFLAGS) main.o conversions.o drawGraph.o sExtension.o -o legacyCalculator -lm

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

conversions.o: conversions.c
	$(CC) $(CFLAGS) -c conversions.c -o conversions.o

drawGraph.o: drawGraph.c
	$(CC) $(CFLAGS) -c drawGraph.c -o drawGraph.o

sExtension.o: sExtension.c sExtension.h
	$(CC) $(CFLAGS) -c sExtension.c -o sExtension.o	


clean:
	rm -f *.o legacyCalculator
