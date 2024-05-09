#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef  struct {

}QueueEntry;
 void create_Queue(Queue *);
 void Append(QueueEntry ,Queue *);
  void serve(QueueEntry *,Queue *);
 int Empty_Queue(Queue *);
 int Full_Queue(Queue *);
  void clear_Queue(Queue *);
 void Traverse_Queue(Queue *,(*)(QueueEntry)){
  
 
 
