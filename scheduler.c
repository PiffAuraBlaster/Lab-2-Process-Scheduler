#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "scheduler.h"
#include "queue.c"


int stop()
{
	return 0;
}

int main()
{	
	 Queue *Q = CreateQueue(20);
	
	//Where the command ID is stored.//
	char C[100];
	//Where the PID is stored//
	int PID[100];
	//The clock tick starts at 0//
	int CLOCK = 0;
	
	
	printf("Please enter a command:\n");
	scanf("%s %d", &C, &PID);
	//If the command ID is A stores PID in queue.//
	if (strcmp(C, "A")==0){
		Enqueue(Q, PID);
		printf("Your input was added to back of queue!\n");
	}
	if (strcmp(C, "T")==0)
	{
		CLOCK = CLOCK + 1;
		printf("TICK!\n");
	}	
	if (strcmp(C, "S")==0)
	{
		stop();
	}
	return 0;
	

}

