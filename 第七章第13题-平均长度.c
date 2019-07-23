#include<stdio.h>

int main(){
	float len = 0 ,num2 = 0,result;
	char ch, c = 32;
	
	printf("Enter a sentence :");
	ch = getchar();

	while( ch != '\n'){
		if(ch == c){
			num2++;
			}
		len++;
		ch = getchar();
		}	
			
	result = (len - num2) / (num2 + 1);
	
	printf("Average word length: %f", result);
		

	
}
