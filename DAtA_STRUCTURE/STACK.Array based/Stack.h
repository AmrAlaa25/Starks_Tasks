
#define MAXSTACK 100
typedef  struct {
char Name[100];
int id;
}StructEntry;
typedef  struct {
int top;
StructEntry entry[MAXSTACK];
}Stack;	

void CreateStack(Stack*);
void  push(StructEntry , Stack*);
void pop(StructEntry*,Stack*);
int StackEmpty(Stack*);
void Top(StructEntry*,Stack*);
int StackSize(Stack*);
void StackClear(Stack*);
void TraverseStack(Stack*,void(*pf)(StructEntry));

   

