#include <stdio.h>
#include "file.h"
#include"STD_TUPLE.h"


int main (){	
f32 x,y;
print();
scanf("%f%f",&x,&y);
s8 op;
print1();
fflush(stdin);

scanf("%c",&op);
fflush(stdin);

switch(op){
case '+':
printf("%0.2f",SUM(x,y));	
break;
case '-':	
printf("%0.2f",SUB(x,y));	
break;
case '*':	
printf("%0.2f",mult(x,y));	
break;
case '/':
printf("%0.2f",div(x,y));
break;	
default:
printf("there is not the operation");	
	
}
}