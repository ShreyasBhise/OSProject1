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
long syscall(long number);
double avg_time = 0;
void syscall_benchmark() {
	int numCalls = 3000, i;
	long pid;
	struct timeval start, end;
	for(i = 0; i < numCalls; i++) {
		gettimeofday(&start, NULL);
		/*Syscall*/
		pid = syscall(SYS_getpid);
		gettimeofday(&end, NULL);
		avg_time += (end.tv_usec - start.tv_usec);
		avg_time += (end.tv_sec - start.tv_sec) * 1000;

	}
	avg_time /= numCalls;
}

int main(int argc, char *argv[]) {
	syscall_benchmark();

	// Remember to place your final calculated average time
	// per system call into the avg_time variable

	printf("Average time per systemcall is %f microseconds\n", avg_time);

	return 0;
}
