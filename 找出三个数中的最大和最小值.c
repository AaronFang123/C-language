#include<stdio.h>

int main()
{
	int i, j, k, max, min;
	printf("����i:");
	scanf("%d",&i);
	printf("����j:");
	scanf("%d",&j);
	printf("����k:");
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
	
	printf("���ֵΪ%d\n", max);
	printf("��СֵΪ%d\n",min);
	return 0;
	
}

 