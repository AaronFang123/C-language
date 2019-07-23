#include<stdio.h>
int main(){
	
	int n,temp;
	printf("输入任意一个大于一的整数");
	scanf("%d",&n);
	temp = n - 1;
	
	for(;temp > 0;temp--) {
		if(n % temp == 0 ) goto done;
	}
   done:
   if (temp == 1) printf(" zhushu");
	   else printf("fushu");
	   
	   return  0;
}
