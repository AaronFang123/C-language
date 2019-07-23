#include<stdio.h>
#include<stdbool.h>

int main()
{
	float num1, num2;
	char ch;
	
	printf("Enter an expression: ");
	scanf("%f", &num1);
	
	while(1)
{
	ch = getchar() ;
	if(ch == '\n')
		break;
	scanf("%f", &num2);
	switch(ch)
{
	case '+':
		num1 = num1 + num2;    break;
	case '-':
		num1 = num1 - num2;    break;
	case '*':
		num1 = num1 * num2;		break;
	case '/':
		num1 = num1 / num2;		break;
}
	
} 
	printf("Value of expression: %g", num1);
	return 0;
}
