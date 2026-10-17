#include <stdio.h>

/*
Write a program in C to store elements in an array and print them

Expected Output :
Elements in array are: 1 1 2 3 4 5 6 7 8 9
*/

int main(void)
{
	int array[10];

	for (int i = 1; i < 10; i++)
	{
		array[i] = i;
	}

	array[0] = 1;
	array[1] = 1;

	for (int j = 0; j < 10; j++)
	{
		fprintf(stdout, "%d\n", array[j]);
	}

	return 0;
}
