#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include <iostream>

int quickmedian_odd(int x[], int left, int right)
{
	int i, j, k, N = right-left; 
	int y[];
	if(left<right-1)
	




}


int quickmedian_even(int x[], int left, int right)
{
	int i, j, k, pivot, pivot_loc, N = right-left; 
	
	int y[];
	
	




}



int main()
{	
	int i,n;
	printf("n=");
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++)
	{
		A[i]=rand()%20;
		printf("%2d, ",A[i]);
	}
	
	if (n%2 ==0){
		quickmedian_even(A[n],0,n-1);
		printf("median= %.1f",med_f);
	}
	else
	{
		quickmedian_odd();
		printf("median= %2d",med_i);
	}

	return 0;
}

