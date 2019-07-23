#include<stdio.h>

int main()
{
	float i, n, result = 1;
	scanf("%f",&n);
	while(n > 1){
		i = 1/n;
	
		result *= i;
		n--;}
  printf("%f",result);	
}
