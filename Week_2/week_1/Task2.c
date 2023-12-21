#include <stdio.h>
int main(){
	float num_1,num_2;
	printf("Type the frist number:");
scanf("%f",&num_1);
fflush(stdin);
	printf("Type the second number :");
	scanf("%f",&num_2);
	fflush(stdin);
	float temp;
printf("the numbers before swaping:\n the num_1=%0.2f\n the num_2=%0.2f\n  ",num_1,num_2);

	temp=num_1;
	num_1=num_2;
	num_2=temp;
	
	
printf("the numbers After swaping:\n the num_1=%0.2f\n the num_2=%0.2f\n  ",num_1,num_2);	
	
	
	
	
}