#include <stdio.h>
int main(){
int size ;
int product=1;
	int sum=0;
	printf("Type the size of array- ");
	scanf("%d",&size);
	int arr[size];
	printf("Type the elements of array- ");
for (int i=0; i<size ;i++){
	scanf("%d",&arr[i]);	
}	
for (int i=0; i<size ;i++){
	if(arr[i]%2==0){
		sum+=arr[i];
				
	}	
}	
for (int i=0; i<size ;i++){
	if(arr[i]%2==1){
		product*=arr[i];	
	}	
}	
	
	printf("Sum of Even:- %d\n",sum);
	printf(" THE PRODUCT:- %d",product);
}