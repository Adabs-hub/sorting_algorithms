#include "sort.h"
/**
 * bubble_sort - sort data in ascending order
 * @array: array of data to sort
 * @size: of array to sort
 * Return: nothing
 */


void bubble_sort(int *array, size_t size)
{
	int temp, swapped;
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		/*Flag to optimize the algorithm by detecting if any swaps were made*/
		swapped = 0;

		/*Loop through the unsorted portion of the array*/

		for (j = 0; j < size - 1 - i; j++)
		{
			/*If the current element is greater than the next element, swap them*/
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

				for (k = 0; k < size; k++)
				{
					printf("%d", array[k]);
					if (k != size - 1)
						printf(", ");
				}
				printf("\n");
			}
		}

		if (swapped == 0)
			break;
	}
}
