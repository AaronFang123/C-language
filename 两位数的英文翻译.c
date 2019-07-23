#include<stdio.h>

int main()
{
	int a, b;
	printf("Enter a two-digit number:");
	scanf("%1d%1d",&a ,&b);
	
	switch(a){
		case 2: printf("twenty-"); break;
		case 3: printf("thirty-"); break;
		case 4: printf("forty-"); break;
		case 5: printf("fifty-"); break;
		case 6: printf("sixty-"); break;
		case 7: printf("seventy-"); break;
		case 8: printf("eighty-"); break;
		case 9: printf("ninty-"); break;
  	    case 1:
     	   {if(b == 0) printf("ten");
	    	else if(b == 1) printf("elevent");
	     	else if(b == 2) printf("twelve");
	        else if(b == 3) printf("thirdteen");
	        else if(b == 4) printf("forteen");
	        else if(b == 5) printf("fifth");
	        else if(b == 6) printf("sixteen");
            else if(b == 7) printf("seventeent");
	        else if(b == 8) printf("eighteen");
	        else if(b == 9) printf("ninteen");
     	    return 0;}
	}
      switch(b){
      	case 2: printf("two\n"); break;
		case 3: printf("three\n"); break;
		case 4: printf("four\n"); break;
		case 5: printf("five\n"); break;
		case 6: printf("six\n"); break;
		case 7: printf("seven\n"); break;
		case 8: printf("eight\n"); break;
		case 9: printf("nine\n"); break;
      }
      
 return 0;
	
} 
