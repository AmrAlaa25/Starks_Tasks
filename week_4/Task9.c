 #include <stdio.h>
int main(){
char str1[50];
char str2[500];
printf("Type the frist string:-");
scanf("%s",str1);
printf("Type the secand string:-");
scanf("%s",str2);
int i=0;
for (;str1[i]!=0&&str2[i]!=0;i++){
if(str1[i]!=str2[i]){
	printf("the strings are not equal");
	return 0;
	
}	
}
if(str1[i]==0&&str2[i]==0)
	printf("the strings are  equal");
else
	printf("the strings are not equal");

	return 0;

}
 