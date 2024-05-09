#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 
typedef struct Queue{
	 int front ;
	 int rear;
	 int size;
 QueueEntry entry[MAXQueue];
 }Queue;
 
 void create_Queue(Queue *pq){
pq->front=0;	 
pq->rear=-1;	 
pq->size=0;	 
 }
 
 void Append(QueueEntry e,Queue *pq){
pq->rear=(pq->rear+1)%MAXQueue;	 
	 pq->entry[pq->rear]=e;
pq->size++;

	 
 }

  void serve(QueueEntry *pe,Queue *pq){
	*pe=pq->entry[pq->front];
pq->front=(pq->front+1)%MAXQueue;	 
pq->size--;  
  } 
  

 int Empty_Queue(Queue *pq){
return !pq->size; 
	 
 }
 int Full_Queue(Queue *pq){
return (pq->size==MAXQueue); 
 } 
 int Queue_Size(Queue *pq){
	return pq->size; 
	 
 }

  void clear_Queue(Queue *pq){
pq->front=0;	 
pq->rear=-1;	 
pq->size=0;	 
 }
 
 void Traverse_Queue(Queue *pq,(*pf)(QueueEntry)){
int pos,s;
for(pos=pq->front,s=0;s<pq->size;s++){
(*pf)(pq->entry[pos])	;
pq->pos=(pq->pos+1)%MAXQueue;	 
}	 
	
 }