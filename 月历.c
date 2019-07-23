#include<stdio.h>

int main()
{
	int n, i, k = 0, date = 1;
	printf("Enter number of days in month: ");
	scanf("%d",&n);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d",&i);
	printf("\n");
 	
 	while(k < i -1){                             /*确定前面的空个位数*/ 
			printf("   ");
			k++;}
		
	for(;date <= n;date++){
		
		if((date + i - 1) % 7 == 0)               /*判断是否为最后一天*/ 
		  printf("%2d\n",date);
		else 
		  printf("%2d ",date); 
  		
		
		
	}
	return 0;
} 
