#include<stdio.h>

int main()
{
	int i, j, k, max, min;
	printf("输入i:");
	scanf("%d",&i);
	printf("输入j:");
	scanf("%d",&j);
	printf("输入k:");
	scanf("%d",&k);
	
	if (i > j)
		if (i > k)
			if (j > k)
				max = i, min = k;
			else
				max = i, min = j;
			
		else
			if (k > j)
				max = k, min = j;
			else
				max = k, min = i;
	else
		if (j > k)
			if(k > i)
				max = j, min = i;
			else
				max = j, min = k;
		else
			max = k, min = i;
	
	printf("最大值为%d\n", max);
	printf("最小值为%d\n",min);
	return 0;
	
}

 