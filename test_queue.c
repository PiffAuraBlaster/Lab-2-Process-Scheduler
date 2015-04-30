#include <stdio.h>
#include <assert.h>

#include "functions.h"
#include "test_queue.h"
#include "queue.h"


int main(void){
test_createQueue();
test_enqueue();
test_dequeue();

Queue *Q = createQueue(5);
Enqueue(Q,1);
Enqueue(Q,2);
Enqueue(Q,3);
Enqueue(Q,4);
printf("Front element is %d\n",front(Q));
Enqueue(Q,5);
Dequeue(Q);
Enqueue(Q,6);
printf("Front element is %d\n",front(Q));

puts("Queue test successful!");
return 0;
}

