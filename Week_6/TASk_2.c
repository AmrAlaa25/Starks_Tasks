#include<stdio.h>
#include "STD_TYPLE.h"
typedef struct {	
u8 hour; 
u8 minutes;
u8 second;

}Time;
Time start;
Time end;

int main(){

printf(" enter start time with hours,minutes and seconds ");	
	scanf(" %d %d %d",&start.hour,&start.minutes,&start.second);
	printf(" \n enter the end time with hours,minutes and seconds ");	
	scanf("   %d %d %d",&end.hour,&end.minutes,&end.second);
	
int hour =end.hour-start.hour;	
int minutes =end.minutes-start.minutes;	
int second =end.second-start.second;	
	printf("the defferent is %d:%d:%d",hour,minutes,second);
	
	
}
