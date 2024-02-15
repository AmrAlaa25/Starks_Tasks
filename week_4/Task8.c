#include <stdio.h>
int main(){
char str[100],ch;
int count=0 ;
printf("Type the string:- ");
gets(str);	
	
printf("Type the character to find:- ");
	scanf("%c",&ch);
	
	for (int i=0;str[i]!=0;i++){
		
		if (str[i]==' ')
			str[i]=ch;
		
		
		
	}
	
	
	printf("After replacing the space:- %s  " ,str);
	
	
	
	
	
	
	
}