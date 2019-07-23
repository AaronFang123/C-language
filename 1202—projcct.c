#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define N 10

int rand_number, dec;
char array[N][N];
void initialize_number_generator(void)
{
	srand((unsigned) time(NULL));				
}

void randing(void)
{
	rand_number = rand() ; 
} 

void derection(void)
{   
	initialize_number_generator();
	randing();
	int dec;
	dec = rand_number % 4;	
}

int main(void)
{
	int bool_array[N][N] = false;  //定义对照数组为零矩阵 
	int i,j; 
	for (i = 0; i < N; i++) 
	{
	for (j = 0; j < N; j++) 
		{
			b[i][j] = '.';         //初始化操作数组 
		}
	}
	array[0][0]='A';
	bool_array[0][0]=true;
	i = 0;
	j = 0;
	
	int m;
	for(m = 0; m < 25; m++)          //0上1下2左3右 
	
	{
		initialize_number_generator();
		if(dec == 0)
		{
			if(i - 1<0)  continue;  //向上超出表格重新循环 
		}    
		else if(bool_array[i-1][j] == true)
		{
		  if ((bool_array[i + 1][j] == true && bool_array[i][j - 1] == true && bool_array[i][j + 1] == true)
           ||
		}   
		       
	
	}
	
	
}










