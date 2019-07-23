#include<stdio.h>

int fact(int n){
	if (1 >= n)
	  return 1;
    else 
       return n * fact(n - 1); 
};

int main(){
	int n;
	scanf("%d", &n); 
	printf("n = %d", fact(n));
    
	return 0;    

}
