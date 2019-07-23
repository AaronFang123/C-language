#include <stdio.h>
#include <string.h>

#define N  30

int main (void){
	char str1[N];
    char str2[N];
    char *p1, *p2;
    int n,len1,len2,len3;
    
    strcpy(str1, "abc");
	strcpy(str2, "def");
	//调用strcat函数，将"ghi"字符串拼接到str2字符串后面，返回值保持到p1
	printf("%s\n",str2);
	printf("%s\n",p1);

	//调用strcat函数，将p1字符串拼接到str1字符串后面，返回值保持到p2
	printf("%s\n",p2);
	return 0; 	
}
