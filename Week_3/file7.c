#include <stdio.h>
int quality_Points(int num);

int main (){
	int student_avg;
	printf("enter the average:-");
	scanf("%d",&student_avg);
printf("%d",quality_Points(student_avg));
}
int quality_Points(int num){
	
	if (num<=100&&num>=90){
		return 4;
		
	}
		else if (num<90&&num>=80){
		return 3;
		
	}	
	 else if (num<80&&num>=70){
		return 2;
		
	}
	else if (num<70&&num>=60){
		return 1;
		
	}
	
	else
		return 0;
	
	
}
