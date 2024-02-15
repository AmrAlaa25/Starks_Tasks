#include <stdio.h>
int main(){
	int size;

	printf("type the size of array:- ");
	scanf("%d",&size);
	int arr[size];

	printf("type the element of array:- ");
	for(int i=0; i<size;i++)
	{
	scanf("%d",&arr[i]);
		
	}
int max =arr[0];	
int min =arr[0];	
for(int i =0; i<size;i++){
if (arr[i]>max)
max=arr[i];
	if (arr[i]<min)
min=arr[i];
	
}
printf("the max number is:- %d\nthe min number is:- %d ",max,min);

	
return 0;	
}