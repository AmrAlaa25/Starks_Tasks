typedef  struct {
}StructEntry;
void CreateStack(Stack * );
void Push(StackEntry ,Stack *);
void Pop(StackEntry * ,Stack *);
void Top(StackEntry *,Stack *);
int StackEmpty(Stack *);
int StackFull(Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack *ps,void(*pf)(StructEntry));
int SizeStack(Stack *ps);	

