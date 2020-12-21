#include <stdio.h>
//Bubble sort C program
//decleration of my global variables
int t, i, count, temp;
//the sort fucntion
void bubble(int *array){
	
	for (i = 0 ; i < t - 1; i++)
			{
				for (count = 0 ; count < t - i - 1; count++)
					{
						if (array[count] > array[count+1])
						{
							temp        = array[count];
							array[count]   = array[count+1];
							array[count+1] = temp;
						}
					}
			}
}

int main()
{	
	printf("How many numbers do you want to input?\n");
	scanf("%d", &t);
	
	int array[t];
	
	printf("Please enter %d integers that has to be sorted\n", t);
	
	for (i = 0; i < t; i++)
	scanf("%d", &array[i]);
	
//function bubble is called 
	bubble(array);
	
	printf("Below is the list of elements sorted in ascending order:\n");
	for (i = 0; i < t; i++)
	printf("%d\t", array[i]);

	printf("\nBelow is the list of elements sorted in descending order:\n");
	for (i = t-1; i >= 0; i--)
	printf("%d\t", array[i]);
	return 0;
}
