#include <stdio.h>
int main(){
int size ;


	printf("Type the size of array- ");
	scanf("%d",&size);
	int arr[size];
	printf("Type the elements of array- ");
for (int i=0; i<size ;i++){
	scanf("%d",&arr[i]);	
}	

int the_biggest=arr[0];	
int the_smallest=arr[0];	
	
	for (int i=0; i<size; i++){
		if(the_biggest<arr[i]){
			
			
			the_biggest=arr[i];
			
			
		}if(the_smallest>arr[i]){
			
			
			the_smallest=arr[i];
			
			
		}

		
	}
	
	printf("the biggest number is %d",the_biggest);
	printf("\nthe smallest number is %d",the_smallest);

	
	
}