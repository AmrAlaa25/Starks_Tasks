#include<stdio.h>
int main(){
char source_str[100];
char search_str[100];
printf("type the source string :-  "); 
scanf("%s",source_str);
printf("type the source string :-  "); 
scanf("%s",search_str);
int count=0,i,j;
for( i=0; source_str[i]!=0;i++){
	for( j=0; search_str[j]!=0;j++){
	if(source_str[i+j]!=search_str[j]){
	
		break;
	}	
}
	if(search_str[j]==0){
		count=1;
		break;
	}
	
}


if(count){
printf("the first occurance of %s at index %d   ",search_str  ,i);

}
else
printf("  not  occurance  ");


} 