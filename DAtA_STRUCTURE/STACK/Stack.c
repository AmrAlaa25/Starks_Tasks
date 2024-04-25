#include<stdio.h>
#include"Stack.h"


  


void CreateStack(Stack *ps){
	
ps->top=0;	
	
}

void  push(StructEntry e, Stack *ps){
	
ps->entry[ps->top++]=e;
	
	
	
}

int StackFull(Stack *ps){
	
	if(ps->top==MAXSTACK)
	return 1;	
	else
	return 0;	
	
}

void pop(StructEntry *pe,Stack *ps){
ps->top--;
*pe=ps->entry[ps->top];	
	
	
}

int StackEmpty(Stack *ps){
if(ps->top==0)
return 1;
else
return 0;	
	
	
}
void Top(StructEntry *pe,Stack *ps){
*pe=ps->entry[ps->top-1];		
	
}
int StackSize(Stack *ps){
return ps->top;	
	
}
void StackClear(Stack *ps){
	
ps->top=0;	
	
}
void TraverseStack(Stack *ps,void(*pf)(StructEntry)){
	for(int i=ps->top;i>0;--i){
	pf(ps->entry[i - 1]);	
		
	}
	
}


