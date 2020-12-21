#include<stdio.h>
//Simple Sort C program
//declaring a global variable n
int n;
//function – sorting to use in the program
void sorting( int *arr)
{
	int j, i, temp;
	for ( i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}  
}
int main()
{
	printf("Enter the size of the array: ");
	scanf("%d", &n);
//declaring local variable i and array num[]
	int num[n], i;

	printf("\nEnter the element of the array:\n");
	for(i = 0; i < n; i++) 
	scanf("%d", &num[i]);	

	printf("The elements before SELECTION SORT:\n");
	for (i = 0; i < n; i++) 
	printf("\t%d", num[i]);

//function sorting is called 
	sorting(num);

	printf("\nThe elements after ASCENDING SORT:\n");
	for (i = 0; i < n; i++)
	printf("\t%d", num[i]);
	
	printf("\nThe elements after DESCENDING SORT:\n");
	for (i = n-1; i >= 0; i--)
	printf("\t%d", num[i]);

 return 0;
}
