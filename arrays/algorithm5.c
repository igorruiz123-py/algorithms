#include <stdio.h>

/*
Write a program in C to count the total number of duplicate elements in an array.
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/

int main(void)
{
	int n = 0;

	fprintf(stdout, "enter value for n: ");
	scanf("%d", &n);

	int array[n];

	int counter = 0;

	for (int k = 0; k < n; k++)
	{
		fprintf(stdout, "enter value for array[%d]: ", k);
		scanf("%d", &array[k]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (array[i] == array[j])
			{
				counter++;
				break;
			}
		}
	}

	fprintf(stdout, "total number of duplicate elements found in the array is : %d\n", counter);

	return 0;
}
