#include<stdio.h>

int main()
{
	int sum, n;
	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to end this program):");
	scanf("%d",&n);
	
	sum = 0;
	while(n != 0){                             /*n=0Ê±¾ÍÌø³ö*/ 
		sum += n;							   /* sum = sum + n  */ 
		scanf("%d",&n);
	}
	
	printf("The sum is %d",sum);
	
	return 0;
	
} 
