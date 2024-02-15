 #include <stdio.h>
int main(){
char str1[50];
char str2[50];
char str3[100];
printf("Type the frist string:-");
gets(str1);
printf("Type the secand string:-");
gets(str2);
int i=0,j=0;
for (;str1[i];i++){
str3[i]=str1[i];	

}for (;str2[j];j++){
str3[i+j]=str2[j];	
}
str3[i+j]=0;
printf("Afte concatenation the strings is \n:- %s",str3);


	return 0;

}
 