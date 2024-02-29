#include<stdio.h>
#include "STD_TYPLE.h"

 typedef struct {	
u8 ID; 
u8 salary;
u8 bonus;
u8  deductions;

}Employee;
Employee Ahmed;
Employee Amr;
Employee Waleed;
int main(){
Amr.ID=100011;	
Waleed.ID=101401;	
Ahmed.ID=112411;	
int num;
int total=0;
printf("tpye the nunmber of the emplyees :-  ");
  scanf("%d",&num );
printf("tpye the ID:-  ");
for(int i=0;i<num;i++ )	
{
int id;
  scanf("%d",&id); 
if(id==Ahmed.ID){
	printf("welcome Ahmed \n type your salary :-");
scanf("%d",&Ahmed.salary);
printf(" type the bonus :-");
scanf("%d",&Ahmed.bonus);
printf(" type the  deductions :-");
scanf("%d",&Ahmed.deductions);
if(i==num-1)
	break;
printf("tpye the ID:-  ");
	
}

else if(id==Amr.ID){
	printf("welcome amr \n type your salary :-");
scanf("%d",&Amr.salary);
printf(" type the bonus :-");
scanf("%d",&Amr.bonus);
printf(" type the  deductions :-");
scanf("%d",&Amr.deductions);
if(i==num-1)
	break;
printf("tpye the ID:-  ");
}
else if(id==Waleed.ID)
{
	printf("welcome waleed \n type your salary :-");
scanf("%d",&Waleed.salary);
printf(" type the bonus :-");
scanf("%d",&Waleed.bonus);
printf(" type the  deductions :-");
scanf("%d",&Waleed.deductions);
if(i==num-1)
	break;
printf("tpye the ID:-  ");
}
else  
	printf("ERROR ");

}
 total=Ahmed.salary-Ahmed.deductions+Ahmed.bonus+ Amr.salary +Amr.bonus-Amr.deductions+Waleed.salary+Waleed.bonus - Waleed.deductions;
 printf("the totalvalue shall be supplied by finance team:- %d ",total);

}



// -> is arrow   used to pointer of struct.