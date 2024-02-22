#include<stdio.h>
int func(int arr [],int size);
int func(int arr [],int  size){
	for(int i=0; i<size;i++){
for(int j=0; j<size-1-i;j++){
if(arr[j]>arr[j+1]){
int tamp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=tamp;
}	
}
}}
int main(){
int size;
printf("the Index of array:");
scanf("%d",&size);	
int arr[size];
printf("the elements of array:");
	for (int i=0;i<size;i++){
printf("the element %d:- ",i+1);	scanf(" %d",&arr[i]);
}
func(arr,size);
int*ptr=arr;

printf("the reverse of the array: \n");
for( int i=0;i<size;i++){	
	
	printf("the element %d:- %d\n",i+1,ptr[i]);

}
return 0;
}