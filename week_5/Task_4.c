#include<stdio.h>
int main(){
	char str[100];
printf("type the string  ");	
gets(str);
char*ptr=str;
int count1=0 ;		
int count2=0 ;
int i=0;		
while(ptr[i]!=0){
if(ptr[i]==' '){
	i++;
	continue;
}
switch(ptr[i])
{
case 'a':case 'A':
count1++;	
	break;
	case 'e':case 'E':
count1++;	
	break;
	case 'o':case 'O':
count1++;	
	break;
	case 'i':case 'I':
count1++;	
	break;
	case 'u':case 'U':
count1++;	
	break;
	
default:
count2++;
break;	
}
i++;
}
printf("number of vowels:- %d       ",count1);
printf(" number of consonants:- %d",count2);	
}