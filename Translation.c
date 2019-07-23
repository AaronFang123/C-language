#include<stdio.h>
int main(void){
  char a;
  long int i,j,m,p;
  long int k[50];
  printf("Enter phone number: ");
  a = getchar();
  j = 0;
  m = 0;
  
  
  	
   while (a!= '\n'){
   	switch (a){
   		case '0': i = 0; break;
   		case '1': i = 1; break;
	   	case 'A': case 'B': case 'C': case '2':
	   	i = 2; break;
	   	case 'D': case 'E': case 'F': case '3':
	   	i = 3; break;
	   	case 'G': case 'H': case 'I': case '4':
	   	i = 4; break;
	   	case 'J': case 'K': case 'L': case '5':
	   	i = 5; break;
	   	case 'M': case 'N': case 'O': case '6':
	   	i = 6; break;
	   	case 'P': case 'Q': case 'R': case 'S': case '7':
	   	i = 7; break;
	   	case 'T': case 'U': case 'V': case '8':
	   	i = 8; break;
	   	case 'W': case 'X': case 'Y': case 'Z': case '9':
	   	i = 9; break;
	   }
	    if (a!='-') printf("%d",i);
	    else printf("%c",a);
	
	   a = getchar();
	      }
	     
   		  
		  return 0;
		  
} 
