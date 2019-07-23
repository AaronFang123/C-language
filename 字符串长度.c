// Derermines the length of wit


#include<stdio.h>

int main()
{
	char ch;
	int len = 0;
	
	printf("Enter a message:");
	ch = getchar();
	while ( getchar() != '\n'){
		len++;
		
	}
	printf("Your message was %d characters long.\n",len);
	
	return 0 ;
}
