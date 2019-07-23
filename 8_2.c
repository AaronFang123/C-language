#include <stdio.h>


int main()
{
	int a[10]={0},i;
	char b;
	printf("Enter a number: ");
	b=getchar();
	while(b!='\n'){
		switch(b){
			case'0':a[0]++;break;
			case'1':a[1]++;break;
			case'2':a[2]++;break;
			case'3':a[3]++;break;
			case'4':a[4]++;break;
			case'5':a[5]++;break;
			case'6':a[6]++;break;
			case'7':a[7]++;break;
			case'8':a[8]++;break;
			case'9':a[9]++;break;
		}
		b=getchar();
	}
	
	
	printf("Digit:\t\t");
	
	for(i=0;i<=8;i++){
		printf("%d  ",i);
	}
	
	printf("9\n");
	printf("Occurrences:\t");
	for(i=1;i<=10;i++){
		if(i <= 9)  printf("%d  ",a[i-1]) ;
		else if(i=10)  printf("%d",a[i-1]);
		
	}
	printf("\n");
	
	return 0;
	
} 
