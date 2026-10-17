#include <stdio.h>

/*
Write a program in C to read n number of values in an array and display them in reverse order.

Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/

int main(void)
{
	int n;

	fprintf(stdout, "enter value for n: ");
	scanf("%d", &n);

	int array[n];

	for (int i = 0; i < n; i++)
	{
		fprintf(stdout, "enter value for array[%d]: ", i);
		scanf("%d", &array[i]);
	}

	int start = 0;

	int end = n - 1;

	while(start < end)
	{
		int temp = array[start];
		array[start] = array[end];
		array[end] = temp;

		end--;
		start++;
	}

	fprintf(stdout, "[");

	for (int j = 0; j < n; j++)
	{
		fprintf(stdout, "%d, ", array[j]);
	}

	fprintf(stdout, "]\n");

	return 0;
}




