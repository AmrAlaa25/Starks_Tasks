#include "Stack.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Display(StructEntry e){
printf("Name:%s\nid=%d ",e.Name,e.id);	
}

int main(){
StructEntry e;
Stack s;
 e.id=161645;
 
 strcpy(e.Name,"Amr alaa");
CreateStack(&s);
if(!StackFull(&s)){
push(e,&s);
}
else
	printf("Stack is full");
TraverseStack(&s,&Display);

	
}