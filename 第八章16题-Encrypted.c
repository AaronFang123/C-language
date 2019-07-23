#include<stdio.h>

int main(void)
{
	char sen[80];
	int i;
	
	printf("Enter message to be encrypted: ");
	for(i = 0;; i++)
	{
		sen[i] = getchar();
		if( sen[i] == '\n')
		  break;
	}
	
	int shift;
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);
	
	int j;
	for(j = 0; j < i+1; j++)
	{
		if(sen[j] >= 'A' && sen[j] <= 'Z')
		  sen[j] = ((sen[j] - 'A') + shift) % 26 + 'A';
		else 
		  if(sen[j] >= 'a' && sen[j] <= 'z')
		    sen[j] = ((sen[j] - 'a') + shift) % 26 + 'a';
    }
    
    printf("Encrypted message: ") ;
	int k;
    for(k = 0;k < i+1; k++)
    {
    	printf("%c", sen[k]);
    }
	return 0;
} 