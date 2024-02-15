#include <stdio.h> 
#include <string.h> 
int main (){
int num;
printf("Type the number :- ");
scanf("%d",&num);
int digit ;
int arr[10]={0};
while(num>0 ){
	
	digit=num%10;

if ( arr[digit]==1)
	break;
	arr[digit]=1; 
	 num=num/10;

	
		

}


if(num>0)
	printf("Yes");
else
	printf("No");
	
return 0;
}