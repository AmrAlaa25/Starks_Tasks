#include <stdio.h>
int main(){

int id;
	printf("type Your ID : ");
	scanf("%d",&id);
	
	const int Id=10022;
	if (id ==Id )
	{
	
	int pas;
	for (int i=0;i<3;i++)
	{
 printf("Enter your Password: ");	
 scanf("%d",&pas);
 if (pas==1622004)
 {
	 
	 printf("Welcome :)");
 break;
 }		
	else {
	if (i==2)
	{
		printf("no more tries ");
	}	
	printf("try again\n");

	}
		
	}	
		
	
	}
	else{
		printf("You are not regiestered");	
	}
	
  return 0;
}