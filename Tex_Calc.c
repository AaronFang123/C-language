#include<stdio.h> 
int main(void)
{   
    float amount, result;
	printf("Enter an amount:\n");
	scanf("%f",&amount);
	result = amount * 1.05;
	
	printf("With tax added:\n%.2f", result);
	
	return 0;
}

	