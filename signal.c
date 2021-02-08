/* signal.c
 *
 *	Group Members Names and NetIDs:
 *   1. Shreyas Bhise - syb29
 *   2. Ryan Jensen - raj107
 *
 * ILab Machine Tested on:
 *		kill.cs.rutgers.edu 
 */
#include<signal.h>
#include<stdio.h>
#include<stdlib.h>

/* Part 1 - Step 2 to 4: Do your tricks here
 * Your goal must be to change the stack frame of the caller (main function)
 * such that you get to the line after "r2 = *( (int *) 0)"
 */

void segment_fault_handler(int signum) {
	printf("I am slain!\n");

	/* Implement Code Here */
	void* add = (void *)&signum;
	add+=0xcc;
        *((int*)add)+=5;	
}

int main(int argc, char *argv[]) {
	signal(SIGSEGV, segment_fault_handler);
	int r2 = 0;

	/*Part 1 - Step 1: Registering signal handler */
	/*Implement Code Here */
	r2 = *( (int *) 0); //This will generate segmentation fault.
	 
	printf("I live again!\n");

	return 0;
}
