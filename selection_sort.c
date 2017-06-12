/*Perform Selection Sort on a given set of numbers*/

#include<stdio.h>
#include<stdlib.h>

void selection_sort(int *a, int n)
{
	int i,j;
	for(i = 0; i < n-1; i++)
	{
		int min = a[i];
		int pos = i;
		for(j = i+1 ; j < n; j++)
		{
			if(a[j]<a[i])
			{
				pos = j;
			}
		}
		int t = a[i];
		a[i] = a[pos];
		a[pos] = t;
	}
	int k;
	for ( k = 0; k < n; k++)
	{
		printf("%d\t",a[k]);
	}
}

int main()
{
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int *a = malloc(sizeof(int)*n);
	int i;
	for(i = 0; i < n; i ++)
	{
		scanf("%d",&a[i]);
	}
	selection_sort(a,n);
}

