#include<stdio.h>
int main(){
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11;
	
	printf("Enter  11 numbers ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11);
    int arr[]={a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11};
	int i,j;
	
	for(i = 0;i <= 10; i++){
		if(i != 10)
		  printf("%d, ",arr[i]);
  		else if(i = 10)
  		  printf("%d\n",arr[i]);
	}
	
	for(  i = 9; i >= 0; i--){							//����ÿ�αȽϵ�����±�  ������ i + 1<=������� 
		for(j = 0;j <= i;j++){						//������������Ԫ�ص��±�Ƚ� 
			
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
	
	for(i = 0;i <= 10; i++){
		if(i != 10)
		  printf("%d, ",arr[i]);
  		else if(i = 10)
  		  printf("%d",arr[i]);
	}
		
	return 0;
}

