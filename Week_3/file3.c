#include <stdio.h>
void decimal_to_binary(int n);

int main() {
    int num ;
	printf("typethe decimal number : ");
	scanf("%d",&num);
   
	printf("The binary %d is: ", num);
  decimal_to_binary(num);
   
    return 0;
}
void decimal_to_binary(int n){   
   if (n / 2 != 0) {
        decimal_to_binary(n / 2);
    
	}
	
printf ("%d",n%2);
}