#include <stdio.h>


/*
Write a program in C to count the frequency of each element of an array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 25
element - 1 : 12
element - 2 : 43
Expected Output :
The frequency of all elements of an array :
25 occurs 1 times
12 occurs 1 times
43 occurs 1 times
*/

int main(void)
{
	int n = 0;

	fprintf(stdout, "enter value for n: ");
	scanf("%d", &n);

	int array[n];
	int freq[n];

	for (int i = 0; i < n; i++)
	{
		fprintf(stdout, "enter value for array[%d]: ", i);
		scanf("%d", &array[i]);

		freq[i] = -1;
	}

	for (int j = 0; j < n; j++)
	{
		int counter = 1;

		for (int k = j + 1; k < n; k++)
		{
			if (array[j] == array[k])
			{
				counter++;
				freq[j] = 0;
			}
		}

		if (freq[j] != 0)
		{
			freq[j] = counter;
		}
	}

	fprintf(stdout, "the frequency of all elements of the array: \n\n");

	for (int m = 0; m < n; m++)
	{
		fprintf(stdout, "array[%d] occurs %d times\n", array[m], freq[m]);
	}

	return 0;
}
