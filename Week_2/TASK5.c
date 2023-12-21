#include<stdio.h>
int main(){ 
 int N,A,B
 ,sum=0;
 printf("type the numbers: ");
scanf("%d%d%d",&N,&A,&B);
//printf("type the third number (B):  ");
 //scanf("%d ",&B);
for(int i=1;i<=N;i++){
	int n;
	n=i;
	int sum1=0;
	while(n!=0){
		sum1 +=(n%10);
		
		n/=10;
		
	}
	if(A<=sum1&&B>=sum1){
		
		sum+=i;
	}
	
	
	
}
printf("the sum=%d",sum);


return 0;
}
