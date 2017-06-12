/*Perform Merge Sort on a given set of numbers*/

#include<stdio.h>
#include<stdlib.h>

int p,q;

void merge(int* b, int* c, int* a,int p, int q)
{
	int i,j,k;
	i = 0;
	j = 0;
	k = 0;
	
	while(i < p && j < q)
	{
		if(b[i]<c[j])
		{
			a[k] = b[i];
			i++;
		}
		else
		{
			a[k] = c[j];
			j++;
		}
		k++;
	}
	int x;
	if(i == p)
	{	
		for(x = j; x < q; x++)
		{
			a[k] = c[x];
			k++;
		} 
	}
	else
	{
		for(x = i; x < p; x++)
		{
			a[k] = b[x];
			k++;
		} 
	}
}

void merge_sort(int* a, int size)
{
	
	int p2 = size/2;
	int q2 = size;
	
	int i,j;

	int* s1 ;
	s1 = malloc(sizeof(int)*p2);
	int* s2 ;
	s2 = malloc(sizeof(int)*(q2 - p2));
	if(size > 1)
	{	
		for(i = 0; i < p2; i++)
		{
			s1[i] = a[i];
		}
		int t1 = 0;
		for(j = p2; j < q2; j++)
		{
			s2[t1] = a[j];
			t1++;
		}
		
		merge_sort(s1,p2);
		merge_sort(s2,t1);
		merge(s1,s2,a,p2,t1);
	}
	
}

int main()
{
    int n;
    int *a;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    a = malloc(sizeof(int)*n);
    int i;
    for(i = 0; i < n; i ++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,n); 

    for(i = 0; i < n; i++)
    {
    	printf("%d\t",a[i]);
    }
}
