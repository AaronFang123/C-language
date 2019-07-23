#include<stdio.h>
#include<ctype.h>

int main()
{
   int result = 0;
   char ch;
   printf("Enter a word: ");
   
   while((ch = getchar()) != '\n') {
   	ch = toupper(ch);
   	switch(ch){
	   	case'A':case'E':case'I':case'L':case'N':case'O':
	   	case'R':case'S':case'T':case'U':
	   	result++; break;
	   	case'D':case'G':
	   	result += 2; break;
	   	case'B':case'C':case'M':case'P':
	   	result += 3; break;
	   	case'F':case'H':case'V':case'W':case'Y':
	   	result += 4; break;
	   	case'K':
	   	result += 5 ; break;
	   	case'J':case'X':
	   	result += 8; break;
	   	case'Q':case'Z':
	   	result += 10; break;
	   	}
   }
   	printf("Scarbble number: %d",result);
   	
   	return 0;
   	
   }


