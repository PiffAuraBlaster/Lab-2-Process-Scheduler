all: psmain.c functions.c
	gcc -o main psmain.c functions.c -I .

run:
	./main

clean:
	rm -f main
	rm -f t

test: test_queue.c functions.c
	gcc -o t test.c functions.c -I .
	./t
	rm -f t