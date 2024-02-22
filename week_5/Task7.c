#include<stdio.h>
int main(){
char str[];
printf("type the string  ");	
gets(str);
char*ptr=str;
int count1=0 ;		
int count2=0 ;
int i=0;		
while(ptr[i]!=0){
if (ptr[i]=='a'||ptr[i]=='A'||ptr[i]=='e'||ptr[i]=='E'||ptr[i]=='i'||ptr[i]=='I'||ptr[i]=='o'||ptr[0]=='O'||ptr[i]=='u'||ptr[i]=='U')	
	count1++;
else
	count2++;
i++;
}

printf("%d",count1);

}