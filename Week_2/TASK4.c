#include<stdio.h>
int main(){
int A,B,C,V;
printf("type amount of shampoo the father used:");
scanf("%d",&A);	
printf("type amount of shampoo the Mother used:");
scanf("%d",&B);		
	
	printf("type amount of shampoo the Takhashi used:");
scanf("%d",&C);	
	printf("type amount of shampoo remaining:");
scanf("%d",&V);

int t;
t=A+B+C;
	
	if(V<=A){
		printf("F");
		
	}
	else if(V<A+B){
		printf("M");
	}
else{
		printf("T");
	
}
	}