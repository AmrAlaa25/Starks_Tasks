#include <stdio.h>
int inverse (int );

int main(){
int number ;
printf ("type the number :- " );
scanf("%d",&number);	
int res= inverse(number );

printf("the digital inverse of %d is %d   ",number,res );

return 0;
}
