#include <stdio.h>
#include <time.h>



int main(int size, int *arr)
{	
	
	double timespec_diff(struct timespec *stop, struct timespec *start)
	{
		double diff = difftime(stop->tv_sec, start->tv_sec);
		diff *= 1000;
		diff += (stop->tv_nsec - start->tv_nsec) / 1e6;
		return diff;
	}

	struct timespec t1, t2;
	long int time;
	clock_gettime (CLOCK_PROCESS_CPUTIME_ID, &t1);
	bubble_sort();
	clock_gettime (CLOCK_PROCESS_CPUTIME_ID, &t2);
	time=(t2.tv_nsec - t1.tv_nsec);
	printf ("Затраченое время: %g нс\n",timespec_diff(&t2, &t1));
	return 0;
}




