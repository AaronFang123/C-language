/*��������һ����λ����Ȼ�������*/

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


/*��ÿ��������һ���������i�Ƿ�����㵱������ѭ���ı�׼*/ 