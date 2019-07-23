#include<stdio.h>

int main()
{
	int m1,m2,n1, n2, i ;
	printf("Enter a fraction:");
	scanf("%d/%d",&m1, &n1);
	m2 = m1;
	n2 = n1;
	
	while(n1 != 0){
		i = m1 % n1;
		m1 = n1;
		n1 = i;
	}
	
	
	
	printf("In lowest terms:%d/%d", m2/m1,n2/m1);
	
	return 0;
} 
