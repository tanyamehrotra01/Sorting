/*Program to perform Distribution Counting Sort
1. Initialize to zero, an array d for storing the frequency of elements
2. Find the frequency of each element in the array and store in array d 
3. Find the cumulative frequency of each element
4. The cumulative frequency gives the index of the elements in the final sorted array s
5. Print the array*/

#include<stdio.h>
#include<stdlib.h>

int *dcs(int *a, int l, int u);

int num;
int *a;

int main()
{
	scanf("%d",&num);
    a = malloc(sizeof(int)*num);
    int i;
	for(i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}

    int *x = dcs(a,0,100);
   
	for(i = 0; i < num; i++)
	{
		printf("%d \t",x[i]);
	}
	return 0;
}

int *dcs(int *a, int l, int u)
{
    int *d = malloc(sizeof(int)*(u-l+1));
    int *s = malloc(sizeof(int)*num);
    int j = 0;
    for(;j<(u-l+1);j++)
    {
        d[j] = 0;
    }

    int i = 0;
    for(;i<num;i++)
    {
        d[a[i]-l] = d[a[i]-l] + 1;
    }

    for(j=(u-l-1);j>=0;j--)
    {
        d[j] = d[j+1] + d[j];
    }

    for(i=num-1;i>=0;i--)
    {
        j = a[i] - l;
        s[d[j]-1] = a[i];
        d[j] = d[j] - 1;
    }
    return s;
}
