//ask user to guess a hidden number

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MAX_NUMBER 2

//ȫ�ֱ���
int secret_number;

//��������
void initialize_number_generator(void);
void choose_new_secret_number(void);
void read_guess(void);

//������
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

//��ʼ������������� ��α����������� 

void initialize_number_generator(void)
{
	srand((unsigned) time(NULL));				//�й̶����㷨��ֻ�е����Ӳ�ͬʱ�����вŲ�ͬ�����Բ�Ӧ�ð����ӹ̶��ڳ����У�
												//Ӧ��������������������ӣ����������ʱ��ʱ��ȡ�
} 

//choose_new_secert_number: �����ѡ��һ����1��MAX֮�����������SERESCT num
void choose_new_secret_number(void)
{
	secret_number = rand() % MAX_NUMBER + 1;
} 

//�Ƚ�����ĺʹ��ڵ����Ĵ�С��ֱ����ȷ������

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
