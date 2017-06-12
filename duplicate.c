/*Find if an array has duplicate elements or not O(n^2)
The performance can be increased to O(n) by sorting the array first and checking the adjacent element for duplicates.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Enter length of array");
	int i,n;
	scanf("%d",&n);
	int* a = malloc(sizeof(int)*n);
	printf("Enter array elements :" );
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	find_duplicate(a,n);
}
void find_duplicate(int *a, int n)
{
	int i,j;
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n ;j++)
		{
			if(a[i] == a[j])
				{
					printf("Duplicates exists : %d\n", a[i]);
					return;
				}
		}
	}
	printf("No Duplicates in the given array");
}
