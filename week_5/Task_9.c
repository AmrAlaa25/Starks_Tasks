#include <stdio.h>
int func(void*ptr,int type);
int  func(void*ptr,int type){
switch(type){
	
case 1:	

return *(char*)ptr * *(char*)ptr * *(char*)ptr;
break;
case 2:	

return  *(int*)ptr * *(int*)ptr * *(int*)ptr;

break;
case 3:

return  *(long int*)ptr * *(long int*)ptr * *(long int*)ptr;

break;	
case 4:	

return *(float*)ptr * *(float*)ptr * *(float*)ptr;

break;
case 5:	

return (*(double*)ptr) * (*(double*)ptr) * (*(double*)ptr);

break;
	
}
}


int main(){
	
int num,type;

printf(" type the number:-   " );
scanf("%d",&num);
printf(" choose the Type :-\nchar:- 1.\n int:- 2.\nlong int:- 3.\nfloat:- 4.\ndouble:- 5.\n    " );
scanf("%d",&type);
int res=func(&num,type);
printf("%d",res);
	
}