#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

int main()
{
    clock_t t1, t2, T1, T2;
    int a=0;
    t1 = clock();
    for(int i=0;i<1000000000;i=i+1){
	a=a+100;
}
	t2 = clock();
	
	T1 = clock();
    for(int i=0;i<1000000000;i=i+1){}
	T2 = clock();
    printf("time for plus=%.3f sec\n", ((t2-t1)-(T2-T1))/(double)(CLOCKS_PER_SEC));



	t1 = clock();
    for(int i=0;i<1000000000;i=i+1){
	a=a*10;
}
	t2 = clock();
	
	T1 = clock();
    for(int i=0;i<1000000000;i=i+1){}
	T2 = clock();
    printf("time for cross=%.3f sec\n", ((t2-t1)-(T2-T1))/(double)(CLOCKS_PER_SEC));
    
    
  
    t1 = clock();
    for(int i=0;i<1000000000;i=i+1){
	a=sin(i);
}
	t2 = clock();
	
	T1 = clock();
    for(int i=0;i<1000000000;i=i+1){}
	T2 = clock();
    printf("time for sin=%.3f sec\n", ((t2-t1)-(T2-T1))/(double)(CLOCKS_PER_SEC));
}
