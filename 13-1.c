#include <stdio.h>
#include <string.h>

int main(void){
	char smallest_word[50], largest_word[50], process_word [50];
	
	printf("Enter word: ");
	scanf("%s", smallest_word);
	strcpy(largest_word, smallest_word);
	do{
		printf("Enter word: ");
	  
	    scanf("%s", process_word);
	   
		if(strcmp(smallest_word, process_word) < 0)
		  strcpy(smallest_word, process_word);
        if(strcmp(largest_word, process_word) > 0)
          strcpy(largest_word ,process_word);
	}while(strlen(process_word) != 4);

	printf("\nSmallest word: %s\n", largest_word);
	printf("Largest word: %s\n", smallest_word);
	
	return 0;
	
} 
