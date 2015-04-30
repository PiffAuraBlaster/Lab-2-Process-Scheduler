all: scheduler.c queue.c
	gcc -o main scheduler.c queue.c -I .

run:
	./main

clean:
	rm -f main
	rm -f queue
	rm -f scheduler
	rm -f t

test1: test_queue.c queue.c
	gcc -o t test_queue.c queue.c -I .
	./t
	rm -f t
	
test2: test_scheduler.c scheduler.c
	gcc -o t test_scheduler.c scheduler.c -I .
	./t
	rm -f t