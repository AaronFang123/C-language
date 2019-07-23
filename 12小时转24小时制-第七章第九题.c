#include<stdio.h>
int main()
{
	char ch;
	int hou1,hou2, min;
	
	printf("Enter a  12-hours time: ");
	scanf("%d:%d %1c",&hou1, &min, &ch);
	  if(ch == 'A')
  		hou2 = hou1;
	  
	  if(ch == 'P')
  		hou2 = hou1 + 12;
  	
  	printf("%d:%d",hou2, min);
return 0;
} 

