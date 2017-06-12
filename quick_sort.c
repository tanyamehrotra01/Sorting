#include <stdio.h>
#include <stdlib.h>


int partition(int *r,int l,int r1);
void Quicksort(int *r,int l,int r1);
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int *r;
    r=malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
    }
    int l=0;
    int r1=n-1;
    Quicksort(r,l,r1);

    for(k=0;k<n;k++)
    {
        printf("%d\t",r[k]);
    }
    return 0;
}

void Quicksort(int *r,int l,int r1)
{
	if(l<r1)
	{
		int s=partition(r,l,r1);
		Quicksort(r,l,s-1);
		Quicksort(r,s+1,r1);
	}
}
	
int partition(int *r,int l,int r1)
{
	int i,j;
	int t;
	int p=r[l];
	i=l+1;
	j=r1;
	while(i<j)
	{
		while(r[i]<=p) i++;
		while(r[j]>p) j--;
		t=r[i];
		r[i]=r[j];
		r[j]=t;
	}
	t=r[i];
	r[i]=r[j];
	r[j]=t;
	
	t=r[l];
	r[l]=r[j];
	r[j]=t;
	
	return j;
}
	
	
	
	
	
	
	
	