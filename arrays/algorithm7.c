#include <stdio.h>

/*
Write a program in C to merge two arrays of the same size sorted in descending order.

Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Input the number of elements to be stored in the second array :3
Input 3 elements in the array :
element - 0 : 1
element - 1 : 2
element - 2 : 3
Expected Output :
The merged array in decending order is :
3 3 2 2 1 1 
*/

int main(void)
{
    int array1[3];
    int array2[3];
    int array3[6];

    for (int i = 0; i < 3; i++)
    {
        fprintf(stdout, "enter value for array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }

    for (int j = 0; j < 3; j++)
    {
        fprintf(stdout, "enter value for array2[%d]: ", j);
        scanf("%d", &array2[j]);
    }

    for (int k = 0; k < 3; k++)
    {
        array3[k] = array1[k];
    }

    for (int l = 3; l < 6; l++)
    {
        array3[l] = array2[l];
    }

    for (int m = 0; m < 6; m++)
    {
        for (int n = 0; n < 5; n++)
        {
            if (array3[n] <= array3[n+1])
            {
                int temp = array3[n+1];
                array3[n+1] = array3[n];
                array3[n] = temp;
            }
        }
    }

    for (int p = 0; p < 6; p++)
    {
        fprintf(stdout, "array3[%d] = %d\n", p, array3[p]);
    }

    return 0;
}