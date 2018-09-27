#include <stdio.h>
#include <stdlib.h>


void bubble_sort() 
{
	int size;
	printf("\nВведите размер массива\n");
	scanf("%i", &size);
	int arr[size];
	for(int i = 0; i<size; i++)
	{
		arr[i] = 10 + rand()% 2000;
		//printf(" %d ",arr[i]);
	}
	for(int i=0; i<size; i++)
	{
		for(int j =0; j<size; j++)
		{
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}	
		}
	
	}

}




