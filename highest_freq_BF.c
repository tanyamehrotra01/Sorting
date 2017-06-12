/*Find element with highest frequency using Brute Force O(n^2)
  The performance can be increased to O(n) by sorting the array first and checking the adjacent element for maximum frequency*/

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
	freq(a,n);
}

void freq(int *a, int n)
{
	int i,j,max = 0, max_ele = 0;
	for(i = 0;i < n; i++)
	{
		int c = 0;
		for(j = 0;j < n; j++)
		{
			if(a[i] == a[j])
				c++;
		}
		if( c > max)
		{
			max = c;
			max_ele = a[i];
		}
	}
	printf("Highest frequency element : %d\n", max_ele );
	printf("frequency : %d", max);
}