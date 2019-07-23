#include<stdio.h>

void decompose (double N, long *int_part, double *float_part){
	*int_part = (long)N;
	*float_part = N - *int_part;
} 
int main(void)
{
    double X;
    long p1;
    double p2;
    printf("enter a float number: "); 
	scanf("%f", &X);
    decompose(X, &p1, &p2);
    printf("int part = %d\n", p1);
    printf("float part = %f", p2);
	return 0;
} 
