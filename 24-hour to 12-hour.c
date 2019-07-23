#include<stdio.h>

int main(int argc, char	*argv[]){
	int hour, min;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &min);
	
	if(hour == 0)  printf("Equivalent 12-hour time: 12:%02d AM\n", min);
 	else if(hour >= 1 && hour < 12 )  printf("Equivalent 12-hour time: %d:%02d AM\n" ,hour, min );
 	else if(hour == 12)  printf("Equivalent 12-hour time: 12:%02d PM\n", min);
	else if(hour >= 13 && hour <= 24)  printf("Equivalent 12-hour time: %d:%02d PM\n", hour - 12, min);
	printf("%s", argv[0]); 
	printf("%d", argc);
	
	return 0;
} 