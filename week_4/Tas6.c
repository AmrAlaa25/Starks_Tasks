#include <stdio.h>
int main(){
int row1,row2,colwn1,colwn2;
printf("Type the row and the colwn of the first array:-  ");
scanf("%d%d",&row1,&colwn1);
printf("Type the row and the colwn of the second array:-  ");
scanf("%d%d",&row2,&colwn2);	
int arr1[row1][colwn1];	
int arr2[row2][colwn2];	
int arr3[row1][colwn2];	
	if (colwn1!=row2){
	printf("the Matrics can not be maltiplied  ");
	return 0;
	}
printf("type the element of the first array:-  ");
for (int i=0; i<row1;i++){
for (int j=0; j<colwn1;j++){
scanf("%d",&arr1[i][j]);	
}
}
	printf("type the element of the second array:-  ");
for (int i=0; i<row2;i++){
for (int j=0; j<colwn2;j++){
scanf("%d",&arr2[i][j]);	

}
}







	
	for(int i=0; i<row1;i++){
		for(int j=0; j<colwn2;j++){
		arr3[i][j]=0;	
		for(int k=0; k<colwn1;k++){
		
		arr3[i][j]=arr1[i][k]*arr2[k][j];
		
	}
	}
	}
for (int i=0; i<row1;i++){
for (int j=0; j<colwn2;j++){
printf(" %d  ",arr3[i][j]);	
}
printf("\n");
}




return 0;
}