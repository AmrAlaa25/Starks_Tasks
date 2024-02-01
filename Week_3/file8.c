#include <stdio.h>
float the_smallest(float num1,float num2 ,float num3);
int main(){
float num_1,num_2,num_3;
printf("Tpye the numbers:- ");
	scanf("%f%f%f",&num_1,&num_2,&num_3);
	
	printf ("the Smallest number: %.3f ",the_smallest(num_1,num_2,num_3));
	

}
float the_smallest(float num1,float num2 ,float num3){
	if(num1<num2&&num1<num3){
		
	return num1;	
	}	
	else if(num2<num1&&num2<num3){
		
	return num2;
	}	
else 
	return num3;
	
}
