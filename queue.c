#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

// CreateQueue takes arguement for the max number of elements and makes a Queue according to that number and returns a pointer to the Queue. //
	Queue * createQueue(int maxElements)
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
	void Dequeue(Queue * Q)
	{
		//States that if the Q size is 0 then it is empty.//
		if(Q->size==0)
		{
			printf("Queue is Empty\n");
			return;
		}
		//Removing an element is equivalent to incrementing the index.//
		else
		{
			Q->size--;
			Q->front++;
			if(Q->front==Q->capacity)
			{
				Q->front=0;
			}
		}
		return;
	}
	int front(Queue *Q)
	{
		if(Q->size==0)
			{
				printf("Queue is Empty\n");
				exit(0);
			}
			//Returns the element at the front of the queue//
			return Q->elements[Q->front];
	}
	void Enqueue(Queue *Q,int element)
	{
		//If the queue is full prevents from pushing an element into it.//
		if(Q->size == Q->capacity)
		{
			printf("Queue if full\n");
		}
		else
		{
			Q->size++;
			Q->rear = Q->rear + 1;
			//As we fill the queue in circular fashion//
			if(Q->rear == Q->capacity)
			{
				Q->rear = 0;
			}
			//Inserts the new element in the rear.//
			Q->elements[Q->rear]=element;
		}
		return;
	}
	
	
	int main()
	{
	}