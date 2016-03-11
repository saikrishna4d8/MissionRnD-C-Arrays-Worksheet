/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int low=0, high=0;
	if (Arr == NULL)
		return NULL;
	if (len <= 1)
		return NULL;
	for (int i = 0; i < len; i++){
		if (Arr[i]>Arr[i + 1])
		{
			low = i;
			break;
		}
	}
	for (int i = (len - 1); i >= 0; i--)
	{
		if (Arr[i] < Arr[i - 1]){
			high = i;
			break;
		}
	}
	Arr[low] = Arr[low] + Arr[high];
	Arr[high] = Arr[low] - Arr[high];
	Arr[low] = Arr[low] - Arr[high];

	return Arr;
}