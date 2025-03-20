CC := /usr/bin/gcc

all: clean | task1 task2 task3 task4

task1:
	$(CC) -o task1 src/1.c
task2:
	$(CC) -o task2 src/2.c
task3:
	$(CC) -o task3 src/3.c
task4:
	$(CC) -o task4 src/4.c -lm
	
clean:
	rm -rf task*
