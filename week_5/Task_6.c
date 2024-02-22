#include<stdio.h>
int main(){
int size;
printf("the Index of array:");
scanf("%d",&size);	
int arr[size];
int*ptr=arr;
	printf("type the element of array :- \n");
	for (int i=0;i<size;i++){
	printf("the element %d:- ",i+1);
	scanf(" %d",&ptr[i]);
}

printf("the reverse of the array: \n");
for( int i=size-1;i>=0;i--){	
	
	printf("the element %d:-  %d\n",i+1,ptr[i]);

}










return 0;
}