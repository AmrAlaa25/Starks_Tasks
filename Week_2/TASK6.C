#include<stdio.h>
int main(){
	int a, b;
	printf("tpye the weight of the bears  ");
	scanf("%d%d",&a,&b);
	
	int y =1;
	for(;;){
		
		a*=3;
		b*=2;
	if (a>b){
		break;
		
	}
		y++;
	}
	
	printf("the number of year is : %d",y);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}