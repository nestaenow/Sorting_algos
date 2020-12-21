#include<stdio.h>
//Simple Sort C program
//declaring global variables
int i,j,temp,c;
//function – sorting to use in the program
void insertion_sort(int *arr){
	for(i = 1 ; i <= c-1 ; i++)
	{
		temp = arr[i];
		j = i-1;
		while((temp < arr[j]) && (j >= 0))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
}

int main()
{
	printf("Enter the size of the array: \n");
	scanf("%d",&c);
	
	int val[c];
	
	printf("Input the elements:\n");
	for(i = 0 ; i < c ; i++)
	scanf("%d",&val[i]);
	
//function insertion_sort is called
	insertion_sort(val);

	printf("Output generated in ascending order: \n");
	for(i = 0 ; i < c ; i++)
	printf("%d\t",val[i]);
	
	printf("\nOutput generated in descending order: \n");
	for(i = c-1 ; i >=0 ; i--)
	printf("%d\t",val[i]);
	return 0;
}
