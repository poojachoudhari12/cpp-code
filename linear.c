#include<stdio.h>
int main()
{
	int loc=0,key,size,i;
	int arr[100];
	printf("\nenter the size value");
	scanf("%d",&size)
	printf("\nenter the value or elements of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	return 0;
}