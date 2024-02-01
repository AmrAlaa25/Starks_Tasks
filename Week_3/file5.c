#include<stdio.h>
#include <stdbool.h>
bool prime_num_or_not (int num);

int main (){
	
	int number ;
		printf("type the number :");
	 scanf("%d",&number);
	
	if (prime_num_or_not(number)){
		
		printf("this number %d is prime number ;",number);
	}	
else	{
		
		printf("this number %d is  not prime number ;",number);
	}
	
}
bool prime_num_or_not (int num){
	if (num<=1){
		return false ;
	
	}
	for(int i=2;i*i<=num;i++){
	if(num%i==0){
		
		return false ;
		
	}	
	}
		return true;
	
}
