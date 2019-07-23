#include<stdio.h>

int main(){
	char ch,a;
	for(ch = 'a';ch <= 'z'; ch++)
		{
		 a = ch - 'a' + 'A';
		 printf("\t\t\t%c%c\n",a,ch);
		 
		 }
	return 0;
} 
