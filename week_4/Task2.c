#include <stdio.h>
int main(){
	int arr[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
int rows[5];
int colwn[5];
for (int i=0; i<5; i++){
	rows[i]=0;
	for (int j=0; j<5;j++ ){
rows[i]+=arr[i][j];		
		
	}
		
}

	printf("the rows total:- ");

for (int i=0; i<5; i++){
	colwn[i]=0;
	for (int j=0; j<5;j++ ){
colwn[i]+=arr[j][i];		
		
	}
		
	printf(" %d",rows[i]);
	
}
	printf("\nthe colwn total:- ");
	for (int i=0; i<5; i++){
		printf(" %d",colwn[i]);
	}
 	
	
	
return 0;	
	
}