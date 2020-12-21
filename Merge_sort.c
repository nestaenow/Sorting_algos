#include<stdio.h>
//Merge Sort C program
//function – perfrom_merge to use in the function algo_merge_sort
void perfrom_merge(int val[],int counter11,int counter12,int counter22,int counter21)
{
	int temp_val[50];
	int c1,c2,c3;
	c1=counter11;
	c2=counter22;
	c3=0;
	while(c1<=counter12 && c2<=counter21)
	{
		if(val[c1]<val[c2])
		temp_val[c3++]=val[c1++];
		else
		temp_val[c3++]=val[c2++];
	}
	while(c1<=counter12)
	temp_val[c3++]=val[c1++];
	
	while(c2<=counter21)
	temp_val[c3++]=val[c2++];
	
	for(c1=counter11,c2=0;c1<=counter21;c1++,c2++)
	val[c1]=temp_val[c2];
}

//function – algo_merge_sort to use in the program
void merge_sort(int val[],int counter1,int counter2)
{
	int mid;
	if(counter1<counter2)
	{
		mid=(counter1+counter2)/2;
		merge_sort(val,counter1,mid);
		merge_sort(val,mid+1,counter2);
		perfrom_merge(val,counter1,mid,mid+1,counter2);
	}
}

int main()
{
	int c,i;
	printf("Enter the size of the array: \n");
	scanf("%d",&c);
	
	int val[c];
	
	printf("Input the elements:\n");
	for(i = 0;i < c;i++)
	scanf("%d",&val[i]);
	
//function algo_merge_sort is called
	merge_sort(val,0,c-1);
	
	printf("Output generated in ascending order \n");
	for(i = 0 ; i < c ; i++)
	printf("%d\t",val[i]);
	
	printf("\nOutput generated in descending order \n");
	for(i = c-1 ; i >= 0 ; i--)
	printf("%d\t",val[i]);
	return 0;
}

