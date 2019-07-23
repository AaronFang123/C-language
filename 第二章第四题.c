/*第二章 第四题 税额*/ 




#include<stdio.h> 
int main(void)
{   
    float amount, result;
	printf("Enter an amount:");
	scanf("%f",&amount);
	result = amount * 1.05;
	
	printf(" With tax added: $%.2f\n", result);
	
	return 0;
	
	
	
	
	
	
}
