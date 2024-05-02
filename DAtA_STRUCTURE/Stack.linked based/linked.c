#include<stdio.h>
#include<stdlib.h>
#include"linked.h"
typedef struct stacknode{
StackEntry entry;	
	struct stacknode *next;
	
}Stacknode;
struct Stack{
Stacknode *top;
int size;
}Stack;
///////////////////////////
void CreateStack(Stack *ps){
ps->top=NULL;	
ps->size=0;
}
/////////////////////////
void Push(StackEntry e ,Stack *ps){
Stacknode *pn=(Stacknode* )malloc(sizeof(Stacknode));
pn->entry=e;
pn->next=ps->top;
ps->top=pn;
ps->size++; 
}
void Pop(StackEntry *pe ,Stack *ps){
Stacknode *pn;
*pe=ps->top->entry;
pn=ps->top;
ps->top= ps->top->next;
free(pn);
ps->size--; 


}
void Top(StackEntry *pe ,Stack *ps){

*pe=ps->top->entry;

 
}
int StackEmpty(Stack *ps){

return ps->top==NULL;
	
	
}
int StackFull(Stack *ps){

return 0;
}
void ClearStack(Stack *ps){
Stacknode *pn=ps->top;	
Stacknode *qn=ps->top;
	while(pn){
pn=pn->next;
free(qn);
qn=pn; 			
	}
	ps->top=NULL;
ps->size=0;
}
void TraverseStack(Stack *ps,void(*pf)(StructEntry)){
Stacknode *pn=ps->top;
while(pn){
(*pn)(pn->entry);
pn=pn->next;
	
}
}
int SizeStack(Stack *ps){	
	
return ps->size; 	
	
}