#include <stdio.h>
#include <string.h>
#define N  30
#define bool int 

int main (void){
	char str1[N];
    char str2[N];
    bool flag;
    
	strcpy(str1,"27");
	strcpy(str2, "27");
	
	//����strcmp�������Ƚ�str1��str2������ֵ��ֵ��flag
	
	if (flag == 0)
	     printf("two strings are same.\n");
	else if (flag < 0) 
	           printf("the second string is bigger.\n"); 
		   else
		      printf("the first string is bigger.\n");        
	return 0; 	
}
