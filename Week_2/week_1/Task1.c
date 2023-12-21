#include <stdio.h>
int main(){
int Num_1;
char ch;
float Num_2;
printf("Type the Integer number= ");
scanf("%d",&Num_1);
fflush(stdin);
printf("\n Type character:   ");
scanf("%c",&ch);
fflush(stdin);
printf("\nType  float number = ");
scanf("%f",&Num_2);
fflush(stdin);
printf("\nThe Integer value = %d\nThe float Value =%0.2f\nThe character=%c",Num_1,Num_2,ch);
}				