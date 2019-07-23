#include<stdio.h>

int main()
{
	int grade1,grade2,grade;
	printf("Enter numerical grade: ");
	scanf("%d", &grade);
	if(grade == 100)  printf("Letter Grade: A\n");
 	if(grade > 100 || grade < 0)  printf("Error, grade must be between 0 and 100.\n");
 	if(grade>= 0 && grade< 10)  printf("Letter Grade: F\n");
	else {
	grade1 = grade / 10;
	switch(grade1){
		case 9: printf("Letter Grade: A\n"); break; 
		case 8: printf("Letter Grade: B\n"); break;
		case 7: printf("Letter Grade: C\n"); break;
		case 6: printf("Letter Grade: D\n"); break;
		case 5: case 4: case 3 :case 2: case 1: 
	    printf("Letter Grade: F\n"); break;

	}
	}
return 0;
}
