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
	//����strcat��������"ghi"�ַ���ƴ�ӵ�str2�ַ������棬����ֵ���ֵ�p1
	printf("%s\n",str2);
	printf("%s\n",p1);

	//����strcat��������p1�ַ���ƴ�ӵ�str1�ַ������棬����ֵ���ֵ�p2
	printf("%s\n",p2);
	return 0; 	
}
