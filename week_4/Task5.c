#include <stdio.h>
int main(){

int number , res=0, rem,copy;
printf("type te number :-");
scanf("%d",&number);
copy=number;
while(copy!=0){
rem=copy%10;
res=res	*10+ rem;
copy=copy/10;	
}
if (res==number)
printf(":- the Number is polindrome ");
else
printf(":- the Number is not  polindrome ");

	
return 0;
} 