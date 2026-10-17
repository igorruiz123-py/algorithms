#include <stdio.h>

/*
Write a program in C to find the sum of all elements of the array.

element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/

int main(void)
{
	int array[] = {2, 5, 8};

	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		sum += array[i];
	}

	fprintf(stdout, "sum: %d\n", sum);

	return 0;
}
