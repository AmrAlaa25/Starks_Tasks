#include<stdio.h>
int main (){
char x ;
char*ptr=&x;
printf("type the first character of the alphabets:");
scanf("%c",ptr);
int i=0;
printf(" the all alphabets: ");
while(i<26){
printf("%c\t",*ptr);	
(*ptr)++;
i++;
	
}
return 0;
} 