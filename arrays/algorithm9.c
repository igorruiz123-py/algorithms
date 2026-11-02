#include <stdio.h>

/*
Write a program in C to find the maximum and minimum elements in an array.
Test  Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 45
element - 1 : 25
element - 2 : 21
Expected Output :
Maximum element is : 45
Minimum element is : 21
*/

int main(void)
{
	int n = 0;

	fprintf(stdout, "enter valur for n: ");
	scanf("%d", &n);

	int array[n];

	for (int i = 0; i < n; i++)
	{
		fprintf(stdout, "enter value for array[%d]: ", i);
		scanf("%d", &array[i]);
	}

	int max = array[0];
	int min = array[0];

	for (int j = 0; j < n; j++)
	{
		if (array[j] > max)
		{
			max = array[j];
		}

		if (array[j] < min)
		{
			min = array[j];
		}
	}

	fprintf(stdout, "maximum element is %d\n", max);
	fprintf(stdout, "minimum element is %d\n", min);

	return 0;
}
