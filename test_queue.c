#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "test_queue.h"
#include "queue.h"


int main(void)
	{
	test_createQueue();
	puts("Queue_test successful!");
	return 0;
	}
	
	void test_createQueue()
	{
	puts("testing if Queue(Q) is created");
	Queue * CreateQueue(int maxElements)
	{
		Queue * Q;
		Q = (Queue *)malloc(sizeof(Queue));
		Q->elements =(int *)malloc(sizeof(int)*maxElements);
		Q->size = 0;
		Q->capacity = maxElements;
		Q->front = 0;
		Q->rear = -1;
		return Q;
	}
	Queue *Q = CreateQueue(5);
	assert(Q != NULL);
	}

	
	