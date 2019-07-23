#include<stdio.h>
int main(void)
{
	float loan, rate, monthlypay, firstmon;
	printf("Enter amount of loan:");
    scanf("%f",&loan);
	printf("Enter interest rate:");
	scanf("%f",&rate);
	printf("Enter monthly payment:");
	scanf("%f", monthlypay);
	
	firstmon =  12;
	
	printf("Balance remaining after first payment:%f", firstmon);
	
    return 0;
	
	
	
	
	
	
}