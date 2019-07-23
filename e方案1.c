#include<stdio.h>

int main()
{
	int m = 0,n, step = 1; 
	float result = 1.0f, i, e = 1.0f;
	printf("This program aims to estimate e\n");
	printf("Enter a int n");
	scanf("%d",&n);
	
	while(step <= n){
		
		while(m <= n){
			m++;
			while(m > 1){
	 		i = 1/m;
	
			result *= i;
			m--;}
		}
		
	e  += result;
	step++;
	}
	
	printf("e=%f",e);
	return 0
	;
} 
