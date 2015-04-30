#include <stdio.h>
#include <stdlib.h>
#include "queue.h"
#include "scheduler.h"


int main()
{
}

int stop() // stop the current running process if it exists, return its previous process if it exists.
id
void ready(int pid) // enqueue pid to ready queue
void sleep(int pid, int abs_time) // stop(), calculate absolute time from
relative time, add pid to wait list, run_next()
void awaken(int pid) // remove from wait list, ready.
void block(int pid) // stop(), add pid to IO list, run_next()
int run_next() // dequeue the next process from the ready queue, ready()