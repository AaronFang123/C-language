#include<stdio.h>

#define N 10

void quicksort(int a[], int low, int high);				//函数声明 
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
		while (low < high && part_element <= a[high])     //high找小于PE的数  low寻找大于PE的数
		  high--;										  //如果high值大于PE，向左移动一格  执行循环  直到找到小于PE的值   
  		if (low >= high)  break; 						  //循环时如果low与high重合  退出循环 
  		a[low++] = a[high];								  //将上面小于PE的对应数组的值赋与low值对应的下一个空位 
  		
  		while (low < high && a[low] <= part_element)	  //low值仿照上例 
  		  low++;
  		if (low >= high) break;
  		a[high--] = a[low];
	}
	
	a[high] = part_element;								  //PE赋给low与high重合时的空位 
	return high;
}
