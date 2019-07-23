#include <stdio.h>

#define MAX_NUMBER 50


int main(void){
	char word[MAX_NUMBER], ch;
	int i = 0;
	printf("Enter a message: ");
	while((ch = getchar()) != '\n'){
		 word[i] = ch;
		 i++;
	}
	 
	 i -= 1;
	 printf("Reversal is: ");
	 for(;i >= 0; i--){
 		printf("%c", word[i]);
 		
 	}
 	printf("\n");
 	
 	return 0;
}