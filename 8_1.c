#include <stdio.h>
 
int main (void)
{
	int digit_wr[10] = {0};
	int digit;
	int n; 
	
	printf ("Enter a number: ");
	scanf ("%d", &n);
	
	while (n > 0) {
		digit = n % 10;
		digit_wr[digit]++;
		n /= 10;
	} 
	
	printf ("Digit:       ");
	int i;
	for (i = 0; i < 10; i++) {
		printf ("%3d", i);
	}
	
	printf ("\nOccurrences: ");
	
	for ( i = 0; i < 10; i++) {
		printf ("%3d", digit_wr[i]);
	}
 
	printf("\n");
	return 0;
 } 
