#include <stdio.h>

/*
Write a program in C to copy the elements of one array into another array.

Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/

int main(void)
{
	int array1[] = {15, 10, 12};

	int array1_len = sizeof(array1) / sizeof(array1[0]);

	int array2[array1_len];

	for (int i = 0; i < array1_len; i++)
	{
		array2[i] = array1[i];
		fprintf(stdout, "array2[%d] = %d\n", i, array2[i]);
	}


	return 0;
}
