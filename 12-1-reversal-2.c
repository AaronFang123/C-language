#include<stdio.h>

int main(int argc, char* argv[])
{
	char *word;
	gets(word);
	
	int i;
	for(i = 0; *(word + i) != '\0'; i++)
	  ;
    for(i = i - 1; i >= 0; i--)
      printf("%c", word[i]);
      
      return 0;
} 