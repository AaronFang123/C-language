#include <stdio.h>
 
int main (void)
{
	int n;
	float sum = 1.0f;
	int temp;
	
printf ("Enter the number: ");
	scanf ("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		temp = 1;
		for (int j = i ; j >= 1; j--) {
			temp *= j;
		}
	sum += 1.0f / temp;
	}
	
	printf ("The value of e is: %f", sum);
	
	return 0;
 } 
 