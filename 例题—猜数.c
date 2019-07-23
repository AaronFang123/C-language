//ask user to guess a hidden number

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUMBER 2

//全局变量
int secret_number;

//函数声明
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guess(void);

//主函数
int main(void)
{
	char command;
	printf("Guess the secret number bewteen 1 and %d.\n\n ", MAX_NUMBER);
	initialize_number_generator();
	do{
		choose_new_secret_number();
		printf("A new number has been choosen.\n");
		read_guess();
		printf("Play again?(Y/N) ");
		command = getchar();
		printf("\n");
	}while (command == 'y' || command == 'Y');
	
	return 0;
} 

//初始化随机数发生器 ：伪随机数的种子 

void initialize_number_generator(void)
{
	srand((unsigned) time(NULL));				//有固定的算法，只有当种子不同时，序列才不同，所以不应该把种子固定在程序中，
												//应该用随机产生的数做种子，如程序运行时的时间等。
} 

//choose_new_secert_number: 随机地选出一个在1和MAX之间的数并存在SERESCT num
void choose_new_secret_number(void)
{
	secret_number = rand() % MAX_NUMBER + 1;
} 

//比较输入的和存在的数的大小，直到正确并返回

void read_guess(void)
{
	int guess, number_guess = 0;
	
	for(;;)
	{
		number_guess++;
		printf("Enter guess: ");
		scanf("%d", &guess);
		if (guess == secret_number){
			printf("You won in %d guesses!\n\n", number_guess);
			return;
		}
		else if(guess < secret_number)
		printf("Too low, try again!\n");
		else
		printf("Too high try again!\n");
	}
} 
