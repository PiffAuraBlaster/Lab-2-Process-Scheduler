#include <stdio.h>
#include <stdlib.h>

//States the 5 properties of Q and defines it as a struct.//
typedef struct Queue{
    int capacity;
    int size;
	int front;
	int rear;
	int *elements;
}Queue;
Queue * createQueue(int maxElements);
void Dequeue(Queue * Q);
int front(Queue *Q);
void Enqueue(Queue *Q,int element);