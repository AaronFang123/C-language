#include<stdio.h>

int main()
{	
	int i, j;
	printf("i=");
	scanf("%d",&i);
	printf("j=");
	scanf("%d",&j);
	
	printf("%d\n", (i >= j) -(j >= i));
	
	return 0;
} 
