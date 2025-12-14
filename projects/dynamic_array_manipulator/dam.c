// Build a program to manage a dynamic array of integers, focusing on adding elements using pointers and dynamic memory.









#include <stdio.h>
#include <stdlib.h>


// function prototypes
void addElement(int **arr, size_t *size, int value)
{
	int *temp = realloc(*arr, (*size +1) * sizeof(int));
	if (temp == NULL)
	{
		printf("Memory allocation Failed!\n");
		exit(1);
	}
	*arr = temp;

	//add value at the end
	(*arr)[*size] = value;
	(*size)++;
}

void printArray(int *arr, size_t size)
{
	printf("Array: ");
	for (size_t i = 0; i < size; i ++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main() 
{
	int *arr = NULL;
	size_t size = 0;

	//add 5 integers from user input
	//
	for (int i = 0 ; i<5; i++)
	{
		int value;
		printf(" enter integer %d: ", i +1);
		scanf("%d", &value);
		addElement(&arr, &size, value);
	}

	printArray(arr, size);
	free(arr);
	return 0;
}

