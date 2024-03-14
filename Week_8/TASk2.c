#include <stdio.h>

#include"STD_TUPLE.h"
#define Print()  printf("TYPE the size of array:- ");
#define Print1()  printf("TYPE the element of aaray:-\n ");
#define Array_sum(arr,n)  ({int sum=0;for(int i=0;i<n;i++){sum+=arr[i];}sum;})\
                                                             
	
	


int main(){
u32 N;
Print();
scanf("%d",&N);
u32 Arr[N];	
Print1();
for(int j=0;j<N;j++){
		fflush(stdin);
scanf("%d",&Arr[j]);
		fflush(stdin);
}	
	
printf(" the sum:- %d",Array_sum(Arr,N));	
	
	
}