/*用于计算两个分数相加（不是最简形式）*/ 




#include <stdio.h>
int main(void)
{   
	int num1, demon1, num2, demon2, result_num, result_demon;
	printf("Enter two fraactions separated by a plus sigh:");
	scanf("%d/%d+%d/%d",&num1, &demon1, &num2, &demon2);
	
	result_num = num1 * demon2 + num2 * demon1;
	result_demon = demon2 * demon1;
	
	printf("The result is %d/%d",result_num, result_demon);
	return 0;
	
	
	
} 
