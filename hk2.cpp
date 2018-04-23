#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
	int n=10;
	int A[n][n],x[n],b[n];
	
	printf("A=");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			A[i][j] = rand()%9+1;
			printf("%2d, ",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	
	printf("x=");
	for (int k = 0; k < n; k++) {
		x[k] = rand()%9+1;
		printf("%2d, ",x[k]);
	}
	printf("\n");
	
	
	int i,j;
	
	#pragma omp parallel for private(i, j)
	for (i=0;i<n;i++){
		b[i]=0;
		for(j=0;j<n;j++){
		b[i]=b[i]+A[i][j]*x[j];
		}
		printf("%2d _ %5d, ",i,b[i]);
	}
	
	
	printf("\n");
	printf("b=");
	for (i=0;i<n;i++){
		printf("%5d, ",b[i]);
	}
	
	
	return 0;
}

