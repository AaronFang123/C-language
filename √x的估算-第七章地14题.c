#include<stdio.h>
#include<math.h>

int main(){
	double x, y1,y2,  ave,fab;
	
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	y1 = 1.000000;
	

	do{
		 
		y2 = (x/y1 + y1)/2; 
		
	    fab = fabs(y1 - y2);//循环时须注意两个变量的比较和赋值时间 
		y1 = y2;
	}while( fab >= 0.00001);
	
	printf("%.5lf",y1);
	
	return 0;
	
}
		
		

 