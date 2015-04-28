#include <stdio.h>
#include <assert.h>

#include "functions.h"
#include "test_queue.h"
#include "queue.h"


int main(void){
test_create();
test_delete();
test_enqueue();
test_dequeue();
test_peek();

puts("Queue test successful!");
return 0;
}

