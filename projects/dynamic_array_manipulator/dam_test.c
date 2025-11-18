#include <stdio.h>
#include <stdlib.h>


void add_array(int **arr, size_t *size, int value)
{
	int *temp = malloc( (*size + 1) * sizeof(int));

	if ( temp == NULL)
	{
		printf("malloc failed\n");
		exit(1);
	}

	// copying existing data into new array
	for(size_t i =0; i < *size; i++)
	{
		temp[i] = (*arr)[i];
	}


	//add new value
	temp[*size] = value;
	(*size)++;

	free(*arr);

	//updating the pointer
	*arr = temp;
}


void print_array(int *arr, size_t size)
{
	for(size_t i = 0 ; i < size ; i ++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}


int main()
{

	int *arr = NULL;
	size_t size = 0;
	int i = 0;

	while (1)
	{
		int value;
		printf(" enter the number or type -1 to end( num you typing %d): \n", i++);
		scanf("%d", &value);

		if (value == -1)
			break;

		add_array(&arr, &size, value);
		
	}
	print_array(arr, size);
	free(arr);
	return 0;
}

