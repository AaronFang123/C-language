#include <stdio.h>
 
 int main (void)
{
	long int num1, denom1, num2, denom2, result_num, result_denom;
	printf ("Enter two fractions separated by a plus sign: ");
	scanf ("%ld/%ld+%ld/%ld", &num1, &denom1, &num2, &denom2);
	
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf ("The sum is %ld/%ld", result_num, result_denom);
	
	return 0;
}
 
