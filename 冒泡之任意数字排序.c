#include<stdio.h>
int main(){

	int num, N;
	printf("How many number(s) do U want to rank: ");
	scanf("%d", &N);
	
	int arr[N];
	printf("Now please enter %d number(s)", N);
	
	for(num = 0; num <=N - 1; num++){
		scanf("%d", &arr[num]);
	}
	
	int i, j;
	
	for(i = 0;i <= N - 1; i++){
		if(i != N -1)
		  printf("%d, ", arr[i]);
  		else if(i = N - 1)
  		  printf("%d\n", arr[i]);
	}
	
	for(  i = N - 2; i >= 0; i--){					//����ÿ�αȽϵ�����±�  ������ i + 1<=������� 
		for(j = 0;j <= i; j++){						//������������Ԫ�ص��±�Ƚ� 
			
			if(arr[j] > arr[j + 1])
			{
			  int temp;
			  temp = arr[j];
			  arr[j ] = arr[j + 1];
			  arr[j + 1]= temp;}
	  		else 
			  continue;
		}
	}
	
	for(i = 0;i <= N -1; i++){
		if(i != N-1)
		  printf("%d, ",arr[i]);
  		else if(i = N-1)
  		  printf("%d",arr[i]);
	}
		
	return 0;
}

