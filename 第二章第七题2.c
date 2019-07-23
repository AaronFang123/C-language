/*用于计算如何用最少钞票来付款*/ 



#include<stdio.h>
int main(void)
{   
    int total, twenties, tens, fives, ones;
	printf("Enter a dollar:\n");
	scanf("%d", &total);
	
	twenties = total / 20;
	tens = (total - 20 * twenties) / 10;
	fives = (total - 20 * twenties - 10 * tens) / 5;
	ones = (total - 20 * twenties - 10 * tens - 5 * fives) /  1;
	
	printf("$20 bills:%d\n", twenties);
	printf("$10 bills:%d\n", tens);
	printf("$5 bills:%d\n", fives);
	printf("$1 bills:%d\n", ones);
	
	return 0;
	
	
	
	
} 
