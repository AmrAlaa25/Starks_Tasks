#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 typedef struct queuenode{
	 QueueEntry entry;
struct queuenode *next;	 
 }QueueNode;
 
 typedef struct queue{
QueueNode *front ;
QueueNode *rear ;
	 int size;
 }Queue;
 
  void create_Queue(Queue *pq){
pq->front=NULL;	 
pq->rear=NULL;	 
pq->size=0;	 
 }
 void Append(QueueEntry e,Queue *pq){
 QueueNode *pn=(QueueNode*)malloc(sizeof(QueueNode));
 if(!pn)
	 return 0;
 
 else{
 pn->next=NULL;
 pn->entry=e;
 if(!pq->rear)
	 pq->front=pn;
 else
	 pq->rear->next=pn;
 pn->rear=pn;
 pq->size++;
 return 1;
 } 
 }
  void serve(QueueEntry *pe,Queue *pq){
 QueueNode *pn=pq->front;
 *pe=pn->entry;
pq->front=pn->next;
free(pn);
if(!pq->front)
	pq->rear=NULL;
pq->size--;
  }
 int Empty_Queue(Queue *pq){
 return !pq->size;
 }
 int Full_Queue(Queue *pq){
 return 0 ;
 }
 int Size_Queue(Queue *pq){
  return pq->size;
 }
  void clear_Queue(Queue *pq){
 while(!pq->front){
pq->rear=pq->front->next;
free(front);	 
pq->front=pq->rear;
 }
pq->size=0;
  }
 void Traverse_Queue(Queue *pq,(*pf)(QueueEntry)){
queuenode *pn;
	 for(*pn=pq->front;pn;pn=pn->next)
	 (*pf)(pn->entry);
	
 }
 
 
 
 
 
 
 
 
 
 
 