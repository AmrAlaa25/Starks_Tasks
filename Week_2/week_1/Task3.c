#include <stdio.h>
int main(){
char ch1,ch2,ch3;
printf("Type random characters_1:  ");
scanf("%c",&ch1);
fflush(stdin);
printf("Type random characters_2:  ");
scanf("%c",&ch2);
fflush(stdin);
printf("Type random characters_3:  ");
scanf("%c",&ch3);
fflush(stdin);

printf("\nch1=%c\n",ch1);
printf("ch2=%c\n",ch2);
printf("ch3=%c\n",ch3);
printf("\nthe ASSCI value of ch1=%d\n",ch1);
printf("the ASSCI value of ch2=%d\n",ch2);
printf("the ASSCI value of ch3=%d\n",ch3);
printf("\nprevios  ch_1=%c\n",ch1-1);
printf("next ch_1=%c\n",ch1+1);
printf(" previos  ch_2=%c\n",ch2-1);
printf("next  ch_2=%c\n",ch2+1);
printf("previos  ch_3=%c\n",ch3-1);
printf("next ch_3=%c\n",ch3+1);

}