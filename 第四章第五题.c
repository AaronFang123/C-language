/******rewrited version of upc.c    P49*********/ 





#include<stdio.h>

int main(void)
{
	int n1, n2 ,n3, n4, n5, n6, n7, n8, n9, n10, n11, first_sum, second_sum, result;
	printf("Enter a number group of 11 digitals£º");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
	n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11);
	
	first_sum = n1 + n3 + n5 + n7 + n9 + n11;
	second_sum = n2 + n4 + n6 + n8 + n10 ;
	result = 3 * first_sum + second_sum;
	
	printf("Cheak digit: %d\n", 9 - ((result -1)%10));
	
	return 0;
	 
}
