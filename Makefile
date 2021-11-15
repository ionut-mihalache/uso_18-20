build: sum.o
	gcc sum.o -o sum

sum.o: sum.c
	gcc -c sum.c -o sum.o

run:
	./sum

runValgrind:
	valgrind ./sum

clean:
	rm *.o sum
