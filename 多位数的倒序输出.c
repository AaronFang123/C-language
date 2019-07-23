/*键盘输入一个多位数，然后倒序输出*/

#include<stdio.h>

int main()
{
	int i, j, k;
	printf("Enter a digit:");
	scanf("%d",&i);
	
	do{
		j = i % 10;
		i = i / 10;
		printf("%d",j);
	}while(i > 0);
	
	return 0;
}


/*将每个余数逐一输出，并将i是否等于零当作跳出循环的标准*/ 