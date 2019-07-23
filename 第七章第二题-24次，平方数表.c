//平方数表，每24次确认一次
/* ch = getchar();
	      
		  if (ch == '\n')
	       continue;}
      else
   	    continue;	*/ 




#include<stdio.h>

int main()
{	
	char ch;
	int i, n;
	printf("This program prints a table of squares.\n");
	scanf("%d",&n);
	getchar();     //接收scanf留下的回车 
	
	i = 1;
	
	while(i <= n){
 	printf("%10d%10d\n", i, i * i);
  	i++;
	  if(i % 24 == 1) {
		printf("Press enter to continue");
	    ch = getchar();
	      
		  if (ch == '\n')
	       continue;}
      else
   	    continue;	
    	
		}
	
	return 0;
}

		

	 