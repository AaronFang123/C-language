#include<stdio.h>

int main()
{
	float n, i;
	printf("Enter a number:");
	scanf("%f",&n);
	scanf("%f",&i);	
	while(n > 0){
		 
		 
		 if(i > n) i = i;
		 else if(i<=n) i=n;
		 scanf("%f",&n);
		
	}
	 printf("The largest number is %f",i);
	 return 0;
}
