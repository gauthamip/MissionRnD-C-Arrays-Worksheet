/*
OVERVIEW:  given an array that has duplicate values remove all duplicate values.
E.g.: input: [1, 1, 2, 2, 3, 3], output [1, 2, 3]

INPUTS: Integer array and length of the array.

OUTPUT: Update input array by removing duplicate values.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Don't create new array, try to change the input array.
*/

#include <stdio.h>

void * removeArrayDuplicates(int *Arr, int len)
{
	int i, j, pos, temp;
	for (i = 0; i < (len - 1); i++)
	{
		for (j = 0; j < (len - i - 1); j++)
		{
			if (Arr[j] > Arr[j + 1])
			{
				temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = temp;
			}
		}
	}
	i = 0;
	j = 0;
	int k = i;
	for (j = k + 1; j < len; j++)
	{
		if (Arr[i] != Arr[j])
		{
			Arr[++i] = Arr[j];
			k = j;
		}
	}
	len = i + 1;
	return NULL;
}