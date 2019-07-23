#include<stdio.h>

int main()
{
	int speed;
	printf("The speeed is:");
	scanf("%d",&speed);
	
	if(0 <= speed && speed < 1) 
	  printf("Clam\n");
  	else 
		if(1 <= speed && speed <= 3)
 			printf("Light Air");
    	else 
			if(4 <= speed && speed <= 27)
        	    printf("Breeze");
   		    else 
			   if(28 <= speed && speed <= 47)
      			    printf("Gale");
			   else
   					if(48 <= speed && speed <= 63)
                       printf("Storm");
			        else
						if(speed >= 63)
	  				    printf("Hurricane") ;
	
	 return 0;
} 

