#include <stdio.h>

unsigned int foo (unsigned int n, unsigned int r)
{
if (n > 0) return((n % r) + foo(n/r, r));
 else return 0;
}
int main (){
	 printf("%u",foo(513,2));
	
	
	
}
/*out put :
:-1+foo(513,2)
:0+f(128,2)
:-0+foo(64,2)
:-0+foo(32,2)
:-0+foo(16,2)
:-0+foo(8,2)
:-0+foo(4,2)
:-0+foo(2,2)
foo(1,2)=1; 
1+1+2
