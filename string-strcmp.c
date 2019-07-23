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
	
	//调用strcmp函数，比较str1和str2，返回值赋值给flag
	
	if (flag == 0)
	     printf("two strings are same.\n");
	else if (flag < 0) 
	           printf("the second string is bigger.\n"); 
		   else
		      printf("the first string is bigger.\n");        
	return 0; 	
}
