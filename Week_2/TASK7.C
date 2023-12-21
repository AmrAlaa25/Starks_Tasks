#include<stdio.h>
int main(){
	int N,M;
while(scanf("%d%d",&N,&M)==2 ){
	 if((N<=0)||(M<=0)){
		 break;
	 }
	 int sum=0;
for(int i=N;i<=M;i++)
{
	printf("%d ",i);	
	sum+=i;
}
	 printf(" the sum= %d\n",sum);
	 }	
	
	return 0;
	
}