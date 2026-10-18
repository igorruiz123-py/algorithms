#include <stdio.h>
#include <stdbool.h>

/*
Write a program in C to print all unique elements in an array.

element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
*/

int main(void)
{
	int array[4];

	for (int i = 0; i < 4; i++)
	{
		fprintf(stdout, "enter valur for array[%d]: ", i);
		scanf("%d", &array[i]);
	}

	for (int j = 0; j < 4; j++)
	{

		bool is_unique = true;

		for (int k = 0; k < 4; k++)
		{
			if (j != k && array[j] == array[k])
			{
				is_unique = false;
				break;
			}
		}

		if (is_unique == true)
		{
			fprintf(stdout, "%d ", array[j]);
		}
	}

	fprintf(stdout, "\n");

	return 0;
}
