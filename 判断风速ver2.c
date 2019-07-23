/********************************************************************************
 *                                                                              *
 *   联级式if语句    须注意    除第一个为单独的if 外， 其余各行均以 else if开头 *                                                                          *
 *                                                                              *
 *******************************************************************************/





#include<stdio.h>                                            
                                                             
int main()                                                   
{                                                            
	int speed;                                                  
	printf("Enter a wind speed: ");                                   
	scanf("%d",&speed);                                         
	                                                            
	if(0 <= speed && speed < 1)                                 
	  printf("Calm\n");                                         
  	else if(1 <= speed && speed <= 3)                               
	  printf("Light air\n");                                     
  	else if(4 <= speed && speed <= 27)                             
      printf("Breeze\n");                               
    else if(28 <= speed && speed <= 47)                         
      printf("Gale\n");                                 
   	else if(48 <= speed && speed <= 63)                       
      printf("Storm\n");                      
    else if(speed > 63)                                        
	  printf("Hurricane\n") ;                             
	                                                            
	 return 0;       
}
