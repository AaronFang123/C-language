#include<stdio.h>

int main()
{
	int grade1,grade2;
	printf("Enter numerical grade: ");
	scanf("%1d%1d",&grade1,&grade2);
	
	switch(grade1){
		case 9: printf("Letter grade: A\n"); break; 
		case 8: printf("Letter grade: B\n"); break;
		case 7: printf("Letter grade: C\n"); break;
		case 6: printf("Letter grade: D\n"); break;
		case 5: case 4: case 3 :case 2: case 1: 
	    printf("Letter grade: F\n"); break;
	    default: printf("Error, grade must be between 0 and 100.\n"); break;
  
  
	}
return 0;
}
