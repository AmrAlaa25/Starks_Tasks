#include<stdio.h>
 int prefct_num(int  num);
 
 int main(){
int num;
	// printf("enter the number:- "); 
	// scanf("%d",&num);

	for(int i=1; i<=100;i++){
if (prefct_num(i)){		
		printf ("%d\n",i);
	}
	
	
	
}	 
return 0;	 
 }
 int prefct_num(int  num){
int sum=0;
for (int i=1; i<num;i++){
	
if(num%i==0){
	sum+=i;
	
	
}		
}	 
	return sum==num; 
	 
	 
	 
 }
 