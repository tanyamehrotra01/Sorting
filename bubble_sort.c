/*Perform Bubble Sort on a given set of numbers
1. Traverse through the array by loop i starting from first index to the end
2. Traverse through the array by loop j starting from first index to last but one element
3. Compare adjacent elements and bubble up the element if it is higher
4. Print the array*/

#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int *a, int n)
{
    int i;
    for(i=0; i<n-1; ++i)
    {
        int j;
        for(j=0; j<n-1-i; ++j)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
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
    bubble_sort(a,n);
}
