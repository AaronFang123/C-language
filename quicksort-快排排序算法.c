#include<stdio.h>

#define N 10

void quicksort(int a[], int low, int high);				//�������� 
int split(int a[], int low, int high);

int main(void)
{
	int a[N], i;
	
	printf("Enter %d number to sorted: ", N);
	for(i = 0; i < N; i++)
	  scanf("%d", &a[i]);
	
	quicksort(a, 0 , N-1);
	printf("In sorted orded: ");
	for (i = 0; i < N; i++)
	  printf("%d ", a[i]);
	printf("\n");
	
	return 0; 
}
void quicksort (int a[], int low ,int high)
{
	int middle;
	
	if (low >= high)  return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int split (int a[], int low, int high)
{
	int part_element = a[low];
	
	for (;;)
	{
		while (low < high && part_element <= a[high])     //high��С��PE����  lowѰ�Ҵ���PE����
		  high--;										  //���highֵ����PE�������ƶ�һ��  ִ��ѭ��  ֱ���ҵ�С��PE��ֵ   
  		if (low >= high)  break; 						  //ѭ��ʱ���low��high�غ�  �˳�ѭ�� 
  		a[low++] = a[high];								  //������С��PE�Ķ�Ӧ�����ֵ����lowֵ��Ӧ����һ����λ 
  		
  		while (low < high && a[low] <= part_element)	  //lowֵ�������� 
  		  low++;
  		if (low >= high) break;
  		a[high--] = a[low];
	}
	
	a[high] = part_element;								  //PE����low��high�غ�ʱ�Ŀ�λ 
	return high;
}
