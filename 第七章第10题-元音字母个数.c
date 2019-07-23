#include<stdio.h>

int main(){
	char ch;
	int num = 0;
	
	printf("Enter a sentence: ");
	ch = getchar();
	while(ch != '\n'){
		switch(ch){
			case'a':case'e':case'i':case'o':case'u':case'A':case'E':case'I':case'O':case'U':
			num++; break;
			
			default:
			break;
		}
	ch = getchar();
	}
	
	printf("YOur sentences contain %d vowels",num);
	
	return 0;	
}
