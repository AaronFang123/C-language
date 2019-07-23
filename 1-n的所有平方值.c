#include<stdio.h>

int main()
{
	int i ,n = 2 ,p = 1;
	printf("Enter a number: ");
	scanf("%d",&i);
	
	while(p < i ){
		p = n * n;
		n += 2; 
		printf("%d\n",p);
	}
	
	return 0;
}
