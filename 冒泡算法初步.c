#include<stdio.h>
int main(){
	int arr[]={34,54,45,345,353,23,46,45,65,78,343};
		
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

