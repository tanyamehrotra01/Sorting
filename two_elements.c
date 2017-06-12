/*Find two elements in an array whose sum is equal to a given number k
1. Assume the array of length n is sorted
2. Maintain tow indexes, low_index = 0 and high_index = n-1
3. Compute sum = a[low_index] + a[high_index]
4. If sum < k decrement high_index
5. Else if sum > k increment low_index
6. If sum == k print the elements at low_index and high_index
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Enter length of the array");
	int n, k, i;
	scanf("%d" , &n);
	int *a;
	printf("Enter the array");
	a = malloc(sizeof(int)*n);
	for( i = 0 ; i < n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number");
	scanf("%d", &k);
	two_numbers(a, n, k);
}

void two_numbers(int *a, int n, int k)
{ 
	int low_index = 0, high_index = n-1 ;
	while(low_index <= high_index)
		{
			int temp = a[low_index] + a[high_index];
			if(temp == k)
			{
				printf("Elements whose sum is equal to %d : %d , %d", k,a[low_index],a[high_index]);
				return;
			}
			else if(temp > k)
			{
				high_index--;
			}
			else
			{
				low_index++;
			}
		}
}