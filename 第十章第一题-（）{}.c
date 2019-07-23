#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void) 
{
	top = 0;
}				

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
} 

void stack_underflow(void)
{
	  exit(0);
}

void stack_overflow(void)
{
	printf("Stack overflow");
	exit(0);
}

void push(char i)
{
	if(is_full())
	  stack_overflow();
 	else 
 	  contents[top++] = i;
}

char pop(void)
{
	if(is_empty())
	  stack_underflow();
 	else
 	  return contents[--top];
}

int main(void)
{
	char cont[100];
	
	printf("Enter parentheses and/or braces: ");

	char ch;
   
	while((ch = getchar() )!= '\n')
	{
  		if(ch == '(' || ch == '{')
          push(ch);
        if(ch == ')' )
          if(pop() == '(')
          continue;
		  else top++;                 //������������,�����ƥ��,top��Ҫ�ӻ�ȥ,��Ϊtop����ƥ�䲻ƥ��,top��Ҫ�Լ�
        if(ch == '}' )
          if(pop() == '{')
          continue;
          else top++;
    }  
    
    if (ch == '\n'&& is_empty())				
 	  printf("Parentheses/braces are nested properly\n");
 	else 
      printf("Parentheses/braces are NOT nested properly\n");
    
	return 0;
	
}