/* syscall.c
 *
 * Group Members Names and NetIDs:
 *   1. Shreyas Bhise - syb29
 *   2. Ryan Jensen - raj
 *
 * ILab Machine Tested on:
 * 		kill.cs.rutgers.edu
 */

#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<sys/syscall.h>

double avg_time = 0;

int main(int argc, char *argv[]) {
	/*Implement Code Here */

	// Remember to place your final calculated average time
	// per system call into the avg_time variable

	printf("Average time per systemcall is %f microseconds\n", avg_time);

	return 0;
}
