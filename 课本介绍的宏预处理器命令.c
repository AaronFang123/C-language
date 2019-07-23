#include <stdio.h>
#define print(n) printf(#n " = %d\n", n);
#define MK(n) i##n
#define G_MAX(type)   \
type type##_max(type x, type y)\
{ \
  return x>y?x:y;   \
}  
	
G_MAX(double)

int main()
{
	int MK(1) = 1, MK(2) = 2;
	print((MK(1)) / (MK(2)));
	int i = 3, k = 4 ,l;
	 l = double_max(i,k);
	 print(l);
	return 0;
}