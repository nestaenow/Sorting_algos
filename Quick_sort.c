#include <stdio.h>
//Quick Sort C program
//function – quicksort_method to use in the program
void quicksort_method(int element_list[], int low, int high)
{
	int pivot, value1, value2, temp;
	if (low < high)
	{
		pivot = low;
		value1 = low;
		value2 = high;
		while (value1 < value2)
		{
			while (element_list[value1] <= element_list[pivot] && value1 <= high)
			{
				value1++;
			}
			while (element_list[value2] > element_list[pivot] && value2 >= low)
			{
				value2--;
			}
			if (value1 < value2)
			{
				temp = element_list[value1];
				element_list[value1] = element_list[value2];
				element_list[value2] = temp;
			}
		}
		temp = element_list[value2];
		element_list[value2] = element_list[pivot];
		element_list[pivot] = temp;
		quicksort_method(element_list, low, value2 - 1);
		quicksort_method(element_list, value2 + 1, high);
	}
}

int main()
{
	int count, i;
	printf("Enter the size of the array: ");
	scanf("%d", &count);
	
	int list[count];
	
	printf("Input the elements:\n");
	for (i = 0; i < count; i++)
	scanf("%d", &list[i]);
	
//function quicksort_method is called
	quicksort_method(list, 0, count - 1);
	
	printf("Output generated in acsending order\n");
	for (i = 0; i < count; i++)
	printf("%d\t", list[i]);
	
	printf("\nOutput generated in decsending order\n");
	for (i = count-1; i >= 0; i--)
	printf("%d\t", list[i]);
	return 0;
}

