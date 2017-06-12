/*Perform Insertion Sort on a given set of numbers*/

#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int *a, int n)
{
	int i;
	for(i = 0; i < n; i ++)
		{
			int val = a[i];
			int j = i-1;
			while(j>= 0 && val < a[j])
			{
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = val;
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
    insertion_sort(a,n);
}