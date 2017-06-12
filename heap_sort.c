/*Perform Heap Sort on given numbers
1. Construct a heap by bottom up technique
2. The first half of the elements in the imput array are the parent nodes ( 1 to n/2).
   Loop i heapifies each of these nodes (at index i).
3. If the node at index k is a leaf node, return from the function
4. If a child node exists, find out the greater child
5. If parent node is lesser than the greatest child node, swap them
6. Heapify at the greatest child node's index*/

#include <stdio.h>
#include <stdlib.h>
	
void heapSort(int *a, int n);
void heapBottomUp(int *a, int n);
void maxKeyDelete(int *a,int n);
void heapify(int *a, int n, int k);

int main()
{
	int n,i,x;
	scanf("%d", &n);
	
	int *s;
	s = malloc(sizeof(int)*n);
	for(i = 1; i < n+1; i++)
	{
		scanf("%d",&s[i]); 
	}
	
	heapSort(s,n);
	
	for(x = 1; x < n+1; x++)
	{
		printf("%d \t",s[x]);
	}
}

void heapSort(int *a, int n)
{
	heapBottomUp(a,n);
	int i;
	for(i = n; i >= 2; i--)
	{
		maxKeyDelete(a,i);
	}
}

void heapBottomUp(int *a, int n)
{
	if(n <= 1)
	{
		return;
	}
	
	int i;
	for(i = n/2; i >= 1; i--)
	{
		heapify(a,n,i);
	}
}

void maxKeyDelete(int *a,int n)
{
	int temp;
	temp = a[1];
	a[1] = a[n];
	a[n] = temp;
	
	heapify(a,n-1,1);
}

void heapify(int *a, int n, int k)
{
	if(2*k > n)
	{
		return;
	}
	int j = 2*k;
	if(j+1 <= n)
	{
		if(a[j+1]>=a[j])
		{
			j = j + 1;
		}
	}
	
	int temp;
	if(a[j]>=a[k])
	{
		temp = a[j];
		a[j] = a[k];
		a[k] = temp;
		
		heapify(a,n,j);
	}
}

