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
	int bool_array[N][N] = false;  //�����������Ϊ����� 
	int i,j; 
	for (i = 0; i < N; i++) 
	{
	for (j = 0; j < N; j++) 
		{
			b[i][j] = '.';         //��ʼ���������� 
		}
	}
	array[0][0]='A';
	bool_array[0][0]=true;
	i = 0;
	j = 0;
	
	int m;
	for(m = 0; m < 25; m++)          //0��1��2��3�� 
	
	{
		initialize_number_generator();
		if(dec == 0)
		{
			if(i - 1<0)  continue;  //���ϳ����������ѭ�� 
		}    
		else if(bool_array[i-1][j] == true)
		{
		  if ((bool_array[i + 1][j] == true && bool_array[i][j - 1] == true && bool_array[i][j + 1] == true)
           ||
		}   
		       
	
	}
	
	
}










