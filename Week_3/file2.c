#include <stdio.h>
unsigned long long int fibonacci (unsigned int num);

int main(){
int n;
printf("type the number of fibonaci(n): ");
scanf("%d",&n);
printf("the digital inverse of %dth is %llu   ",n,fibonacci(n) );

return 0;
}
unsigned long long int fibonacci (unsigned int num){
	unsigned long long int num1=0,num2=1,num3;
	if (num==0)
	return num;
	for(int i=2;i<=num;i++){
		num3=num1+num2;
		num1=num2;
		num2=num3;
		
	
	}
	return num2;
	
}
