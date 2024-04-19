#include<stdio.h>
#include<stdlib.h>
//#include"EX.h"

struct element{
	
	

int numbers;
struct element* Next;

};
struct element* head=NULL;

void add_element(int n){
	
struct element* pcheck;
struct element* pnew;
if(head==NULL){
pnew= (struct element*) malloc(sizeof(struct element))	;
head=pnew;
}
	else{
	pcheck=head;
while(pcheck->Next!=NULL)
pcheck=pcheck->Next;	
	
		 pnew=(struct element*)malloc(sizeof(struct element));
       pcheck->Next=pnew;
		
	}	
int sum=0;
for(int i=0; i<n;i++){
	printf("the %dth value: ",i+1);
scanf("%d",&pnew->numbers);	
sum+=pnew->numbers;
}		
int middle;
if(n%2==0){
middle=(sum/n);	
	printf("Middle element 1 :%d \n",middle);
	printf("Middle element 2 :%d\n ",middle+1);
}
else{
middle=(sum/n);	
	
	printf("Middle element :%d \n",middle);
	
	
	
}


pnew->Next=NULL;
	



}
	
	
	
	
	
	


int main(){	

	
while(1){
	int n;
printf("enter the lenght: ");
scanf("%d",&n);
  if (n <= 0) {
            printf("Exiting the program.\n");
            break;
        }

add_element(n);	
	
}

	
	
}